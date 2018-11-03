void alter(student s[],xinxi a[])//修改函数
{
    int t2;
    scanf("%d",&t2);

        switch(t2)
        {
            case 1://修改基本信息
            {
                int i=0,flag,xh;
                jb_outport(stu);

                file_w_1();//以w+的方式读写基本信息
                scanf_1(stu);

                printf("请输入要修改学生的学号：");
                scanf("%d",&xh);
                while(xh!=s[i].xuehao)
                {
                    i++;
                }
                flag=i;

                printf("请问要将姓名修改成什么？\n");
                scanf("%s",s[flag].name);

                printf("请问要将性别修改成什么？\n");
                scanf("%s",s[flag].sex);


                printf("请问要将宿舍号修改成什么？\n");
                scanf("%d",&s[flag].num);

                printf("请问要将年龄修改成什么？\n");
                scanf("%d",&s[flag].age);

                fprintf_1(stu);//把基本信息存到文件
            }break;
            case 2://修改课程信息
            {
                int i=1,flag;
                char kc[100];
                kc_outport(stu);
                file_w_2();//以w+的方式读写课程信息
                scanf_2(stu);

                printf("请输入要修改的课程编号：");
                scanf("%s",kc);
                while(strcmp(kc,s[i].bianhao)==0)
                {
                    i++;
                }
                flag=i;


                printf("请问要将课程名称修改成什么？\n");
                scanf("%s",s[flag].kecheng);

                printf("请问要将课程类别修改成什么？\n");
                scanf("%s",s[flag].leibie);

                printf("请问要将课程学期修改成什么？\n");
                scanf("%d",&s[flag].xueqi);

                printf("请问要将课程学分修改成什么？\n");
                scanf("%f",&s[flag].xuefen);

                fprintf_2(stu);//把课程信息存到文件
            }break;
            case 3://修改成绩信息
            {
                file_w_3();//以w+的方式读写课程信息
                scanf_3(xin);

                int i=0,flag,xh;
                printf("请输入要修改学生的学号：");
                scanf("%d",&xh);
                while(xh!=s[i].xuehao)
                {
                    i++;
                }
                flag=i;

                int kc=1,xq;
                char kc1[100];
                printf("请问要修改哪一门课程？\n");
                scanf("%s",kc1);
                while(strcmp(kc1,a[flag].term[xq].kc[kc].kecheng)!=1)
                {
                    kc++;
                }

                printf("请问要修改哪一学期？");
                scanf("%d",&xq);
             //   cj_outport(xin,kc,xq);

                printf("请问要将课程编号修改成什么？\n");
                scanf("%s",a[flag].term[xq].kc[kc].bianhao);

                printf("请问要将考试分数修改成什么？\n");
                scanf("%f",&a[flag].term[xq].kc[kc].score);

                printf("请问要将重修信息修改成什么？\n");
                scanf("%s",a[flag].term[xq].kc[kc].chongxiu);

                printf("请问要将挂科信息修改成什么？\n");
                scanf("%s",a[flag].term[xq].kc[kc].guake);

                fprintf_3(xin);//把成绩信息存到文件
            }break;
            case 4://修改品行成绩
            {
                int xq;
                printf("请问要修改哪一学期？");
                scanf("%d",&xq);

                int i=0,flag,xh;
                //px_outport(stu,xq);
                file_w_4();//以w+的方式读写品行成绩
                scanf_4(stu);
                printf("请输入要修改学生的学号：");
                scanf("%d",&xh);

                while(xh!=s[i].xuehao)
                {
                    i++;
                }
                flag=i;

                printf("请问要将辅导员评分修改成什么？\n");
                scanf("%d",&s[flag].term[xq].FDY_pf);

                printf("请问要将班主任评分修改成什么？\n");
                scanf("%d",&s[flag].term[xq].BZR_pf);

                printf("请问要将班级评分修改成什么？\n");
                scanf("%f",&s[flag].term[xq].BJ_pf);

                fprintf_4(stu);//把品行成绩存到文件
            }break;
            case 5://修改奖惩信息
            {


            }break;
            case 0://返回主菜单
            {
                menu(stu,xin);
            }break;
            default:{
                printf("您输入有误，请重新输入。");
                system("pause");
            }break;
        }
}
