void run_outport(student s[],xinxi a[])
{
    int t5;
    scanf("%d",&t5);
    system("cls");
    switch(t5)
    {
    case 1://查看基本信息
        {
            jb_outport(stu);
            system("pause");
        }break;
    case 2://查看课程信息
        {
            kc_outport(stu);
            system("pause");
        }break;
    case 3://查看第一学期成绩
        {
            cj_outport(xin);
        }break;
    case 4://查看第二学期成绩
        {

        }break;
    case 5://查看品行成绩
        {
            px_outport(stu);
            system("pause");
        }break;
    case 6://查看第一学期奖惩成绩
        {

        }break;
    case 7://查看第二学期奖惩成绩
        {

        }break;
    case 0:
        menu(stu,xin);
        break;
    default:
        printf("您输入有误。");
        system("pause");
        break;
    }
}

void jb_outport(student s[])//输出基本信息
{
    if ((jbxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\基本信息", "r+")) == NULL)
    {
        printf("无法打开文件\n");
        exit(0);
    }
    int i=1;
     while(!feof(jbxx))//判断文件是否结束
    {
        //fscanf(jbxx,"%d %s %s %d %d\n",&s[i].xuehao,s[i].name,s[i].sex,&s[i].num,&s[i].age);
        fread(&(s[i]),sizeof(student),1,jbxx);
        i++;
    }
    system("cls");
    printf("学号  \t\t姓名\t性别\t宿舍号\t年龄\n");
    for(int i=1;i<=31;i++)
    {
    printf("%d\t%s\t%s\t%d\t%d\n",s[i].xuehao,s[i].name,s[i].sex,s[i].num,s[i].age);
    }
    fclose(jbxx);
}
void kc_outport(student s[])//输出课程信息
{
    if ((kcxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\课程信息", "r+")) == NULL)
    {
        printf("无法打开文件\n");
        exit(0);
    }
    int i=1;
     while(!feof(kcxx))//判断文件是否结束
    {
        fread(&(s[i]),sizeof(student),1,kcxx);
        i++;
    }
    system("cls");
    printf("课程编号\t课程名称\t课程类别 课程学期 课程学分\n");
    for(int i=1;i<=15;i++)
    {
    printf("%s\t%s\t%s\t\t%d\t%.2f\n",s[i].bianhao,s[i].kecheng,s[i].leibie,s[i].xueqi,s[i].xuefen);
    }
    fclose(kcxx);
}
void px_outport(student s[])//输出品行成绩
{
    if ((pxcj = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\品行信息", "r+")) == NULL)
    {
        printf("无法打开文件\n");
        exit(0);
    }
    int i=1;
     while(!feof(pxcj))//判断文件是否结束
    {
        fread(&(s[i]),sizeof(student),1,pxcj);
        i++;
    }
    system("cls");
    printf("第一学期\n");
    printf("学号\t\t班主任评分 辅导员评分 班级评分\n");
    for(int i=1;i<=31;i++)
    {
    printf("%d\t%d\t\t%d\t%.3f\n",s[i].xuehao,s[i].term[1].FDY_pf,
           s[i].term[1].BZR_pf,s[i].term[1].BJ_pf);
    }
    fclose(pxcj);
}
void cj_outport(xinxi a[])
{
    if ((cjxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\成绩信息", "r+")) == NULL)
    {
        printf("无法打开文件\n");
        exit(0);
    }
    int i=1;
     while(!feof(cjxx))//判断文件是否结束
    {
        fread(&(a[i]),sizeof(student),1,cjxx);
        i++;
    }
    system("cls");
    printf("第一学期\n");
    printf("学号\t\t考试课程 课程编号 考试分数 是否挂科 是否重修\n");
    for(int i=1;i<=31;i++)
        for(int j=1;j<=6;j++)
    {
    printf("%d\t%s\t%.3f\t%s\t%s\n",a[i].xuehao,a[i].term[1].kc[j].bianhao,
           a[i].term[1].kc[j].score,a[i].term[1].kc[j].chongxiu,a[i].term[1].kc[j].guake);
    }
    fclose(cjxx);
}
