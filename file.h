void file_a()//以ab+的形式写入文件末尾
{
    if ((jbxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\基本信息", "ab+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
     if ((kcxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\课程信息", "ab+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
     if ((cjxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\成绩信息", "ab+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
     if ((pxcj = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\品行信息", "ab+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
     if ((jcxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\奖惩信息", "ab+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
}
void file_w_1()//以wb+的方式读写基本信息
{
    if ((jbxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\基本信息", "wb+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
}
void file_w_2()//以wb+的方式读写课程信息
{
    if ((kcxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\课程信息", "wb+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
}
void file_w_3()//以wb+的方式读写成绩信息
{
    if ((cjxx = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\成绩信息", "wb+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
}
void file_w_4()//以wb+的方式读写品行成绩
{
    if ((pxcj = fopen("D:\\软件作业\\c实训作业\\班主任管家系统\\文件文档\\品行信息", "wb+")) == NULL)
     {
        printf("无法打开文件\n");
        exit(0);
     }
}

void scanf_1(student s[])//把基本信息从文件中取出来
{
    int i=1;
    while(!feof(jbxx))//判断文件是否结束
    {
        //fscanf(jbxx,"%d %s %s %d %d\n",&s[i].xuehao,s[i].name,s[i].sex,&s[i].num,&s[i].age);
        fread(&(s[i]),sizeof(student),1,jbxx);
        i++;
    }
}
void scanf_2(student s[])//把课程信息从文件中取出来
{
    int i=1;
    while(!feof(kcxx))//判断文件是否结束
    {
        //fscanf(kcxx,"%s %s %s %d %d\n",s[i].bianhao,s[i].kecheng,s[i].leibie,&s[i].xueqi,&s[i].xuefen);
        fread(&(s[i]),sizeof(student),1,kcxx);
        i++;
    }
}
void scanf_3(xinxi a[])//把成绩信息从文件中取出来
{
    int i=1;
    while(!feof(cjxx))//判断文件是否结束
    {
        fread(&(a[i]),sizeof(xinxi),1,cjxx);
        i++;
    }
}
void scanf_4(student s[])//把品行成绩从文件中取出来
{
    int i=1;
    while(!feof(pxcj))//判断文件是否结束
    {
        fread(&(s[i]),sizeof(student),1,pxcj);
        i++;
    }
}

void fprintf_1(student s[])//把基本信息存入文件中
{
   for(int i=1;i<=31;i++)
    { /*
        fprintf(jbxx,"%d ",s[i].xuehao);
        fputs(s[i].name,jbxx);
        fprintf(jbxx," ");
        fputs(s[i].sex,jbxx);
        fprintf(jbxx," ");
        fprintf(jbxx,"%d ",s[i].num);
        fprintf(jbxx,"%d",s[i].age);
        fprintf(jbxx,"\n");
*/  fwrite(&stu[i],sizeof(student),1,jbxx);
    }

    fclose(jbxx);//关闭该文件
}
void fprintf_2(student s[])//把课程信息存到文件中去
{
    for(int i=1;i<=31;i++)
    {/*
        fputs(s[i].bianhao,kcxx);
        fprintf(kcxx," ");
        fputs(s[i].kecheng,kcxx);
        fprintf(kcxx," ");
        fputs(s[i].leibie,kcxx);
        fprintf(kcxx," ");
        fprintf(kcxx,"%d ",s[i].xueqi);
        fprintf(kcxx,"%d",s[i].xuefen);
        fprintf(kcxx,"\n");*/
        fwrite(&stu[i],sizeof(student),1,kcxx);
    }

    fclose(kcxx);//关闭该文件
}
void fprintf_3(xinxi a[])//把成绩信息存到文件中去
{
    for(int i=1;i<=31;i++)
    {/*
        fprintf(cjxx,"%d ",a[i].xuehao);
        fputs(a[i].kecheng,cjxx);
        fprintf(cjxx," ");
        fputs(a[i].bianhao,cjxx);
        fprintf(cjxx," ");
        fprintf(cjxx,"%f ",a[i].score);
        fputs(a[i].chongxiu,cjxx);
        fprintf(cjxx,"\n");*/
        fwrite(&xin[i],sizeof(xinxi),1,cjxx);
    }

    fclose(cjxx);//关闭该文件
}
void fprintf_4(student s[])//把品行成绩存到文件中去
{
    //for(int k=1;k<=2;k++)
    for(int i=1;i<=31;i++)
    {/*
        fprintf(pxcj,"%d ",s[i].xuehao);
        fprintf(pxcj,"%d ",s[i].term[k].FDY_pf);
        fprintf(pxcj,"%d ",s[i].term[k].BZR_pf);
        fprintf(pxcj,"%d",s[i].term[k].BJ_pf);
        fprintf(pxcj,"\n");*/
        fwrite(&stu[i],sizeof(student),1,pxcj);
    }
    fclose(pxcj);//关闭该文件
}
void fprintf_5(student s[])
{
    for(int i=1;i<=31;i++)
    {
        fprintf(jcxx,"%d ",s[i].xuehao);
        fputs(s[i].HJ_lb,jcxx);
        fprintf(jcxx," ");
        fputs(s[i].HJ_time,jcxx);
        fprintf(jcxx," ");
        fprintf(jcxx,"%d\n",s[i].HJ_score);

        fprintf(jcxx,"%d ",s[i].xuehao);
        fputs(s[i].CH_lb,jcxx);
        fprintf(jcxx," ");
        fputs(s[i].CH_time,jcxx);
        fprintf(jcxx," ");
        fprintf(jcxx,"%d\n",s[i].CH_score);
    }
    fclose(jcxx);
}
