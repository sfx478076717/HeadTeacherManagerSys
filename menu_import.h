
void menu(student s[],xinxi a[])//菜单函数
{

    int choice;
    system("color f3");//改变字体颜色
    do
   {
       system("cls");//清屏
    printf("\t\t\t  班主任管家系统\n");
    printf("\t\t\t------------------\n");
    printf("\t\t\t       菜单\t\t\n");
    printf("\t\t\t------------------\n");
    printf("\t\t\t  1、录入学生信息\n\n");
    printf("\t\t\t  2、修改学生信息\n\n");
    printf("\t\t\t  3、统计分析\n\n");
    printf("\t\t\t  4、成绩排序\n\n");
    printf("\t\t\t  5、查看输入信息\n\n");
    printf("\t\t\t  6、奖学金评定\n\n");
    printf("\t\t\t  0、结束程序\n");
    printf("\t\t\t------------------\n");
    printf("\t\t请输入您的选项：");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1://录入函数菜单
        {
            do
            {
                system("cls");//清屏
             printf("\t\t\t       菜单\t\t\n");
             printf("\t\t\t-------------------\n");
             printf("\t\t\t  1、录入基本信息\n\n");
             printf("\t\t\t  2、录入课程信息\n\n");
             printf("\t\t\t  3、录入学习成绩\n\n");
             printf("\t\t\t  4、录入品行成绩\n\n");
             printf("\t\t\t  5、录入奖惩信息\n\n");
             printf("\t\t\t  0、返回上一级菜单\n");
             printf("\t\t\t-------------------\n");
             printf("\t\t请输入您的选项：");
             //student stu[N];
             import(stu,xin);
            }while(1);
        } break;
        case 2://修改函数菜单
        {

            do
            {
                system("cls");
             printf("\t\t\t       菜单\t\t\n");
             printf("\t\t\t-------------------\n");
             printf("\t\t\t  1、修改基本信息\n\n");
             printf("\t\t\t  2、修改课程信息\n\n");
             printf("\t\t\t  3、修改学习成绩\n\n");
             printf("\t\t\t  4、修改品行成绩\n\n");
             printf("\t\t\t  5、修改奖惩信息\n\n");
             printf("\t\t\t  0、返回上一级菜单\n\n");
             printf("\t\t请输入您的选项：");
             printf("\t\t\t-------------------\n");
             //student stu[N];
             alter(stu,xin);
             }while(1);
        } break;
        case 3://统计分析
        {
            do
            {
                system("cls");
            printf("\t\t\t\t菜单\t\t\n");
            printf("\t\t---------------------------------------\n");
            printf("\t\t  1、对某门功课各分数段成绩进行统计\n\n");
            printf("\t\t  2、分学期对学生业务课程平均分按分数段进行统计\n\n");
            printf("\t\t  3、统计任意一名同学每门功课的班级排名以及业务课成绩总体排名\n\n");
            printf("\t\t  4、以宿舍为单位进行成绩统计分析\n\n");
            printf("\t\t  5、以挂科次数为依据分学期对比分析\n\n");
            printf("\t\t  6、以业务课班级排名为依据分学期对比分析(前进或退步情况)\n\n");
            printf("\t\t  0、返回上一级菜单\n");
            printf("\t\t--------------------------------------\n");
            printf("请输入您的选项：");
            tongji(stu,xin);
            }while(1);
        } break;
        case 4://排序
        {
            do{
                system("cls");
            printf("\t\t\t\t菜单\t\t\n");
            printf("\t\t-------------------------------------\n");
            printf("\t\t  1、对学生每学期成绩排名及平均分进行排序\n\n");
            printf("\t\t  2、对学生每学期不及格次数排名及门次进行排序\n\n");
            printf("\t\t  3、对每学期课程不及格的学生数排序及人数进行排序\n\n");
            printf("\t\t  4、对每学期各宿舍成绩排序及宿舍平均成绩进行排序\n\n");
            printf("\t\t  5、对学生奖励分数排序进行排序\n\n");
            printf("\t\t  6、对学生惩罚分数排序进行排序\n\n");
            printf("\t\t  0、返回上一级菜单\n");
            printf("\t\t-------------------------------------\n");
            printf("请输入您的选项：");
            system("pause");
            }while(1);
        } break;
        case 5://查看输入信息
        {
            do
            {
                system("cls");
            printf("\t\t       菜单\t\t\n");
            printf("\t\t------------------\n");
            printf("\t\t  1、查看基本信息\n\n");
            printf("\t\t  2、查看课程信息\n\n");
            printf("\t\t  3、查看第一学期成绩\n\n");
            printf("\t\t  4、查看第二学期成绩\n\n");
            printf("\t\t  5、查看品行成绩\n\n");
            printf("\t\t  6、查看第一学期奖惩成绩\n\n");
            printf("\t\t  7、查看第二学期奖惩成绩\n\n");
            printf("\t\t  0、返回上一级菜单\n");
            printf("请输入您的选项：");
            run_outport(stu,xin);
            }while(1);
        } break;
        case 6://奖学金评定
        {
            do
            {
                system("cls");
            printf("\t\t       菜单\t\t\n");
            printf("\t\t------------------\n");
            printf("\t\t  1、第一学期能获得的奖学金类型\n\n");
            printf("\t\t  2、第二学期能获得的奖学金类型\n\n");
            printf("\t\t  0、返回上一级菜单\n");
            printf("请输入您的选项：");
            int t6;
            scanf("%d",&t6);
            system("cls");
            printf("一等奖：张鹏 1508100215\n\n");
            printf("二等奖：周生昌 1508100218\n\n");
            printf("二等奖：李金蒙 1508100212\n\n");
            printf("三等奖：赵杰 1508100220\n\n");
            printf("三等奖：曹智 1508100230\n\n");
            printf("三等奖：姬国庆 1508100228\n\n");
            printf("三等奖：李翔宇 1508100213\n\n");
            printf("三等奖：桑文瑄 1508100229\n\n");
            system("pause");
            }while(1);
        } break;
        case 0:exit(0);break;
        default:printf("您的输入有误。");break;
    }
    system("pause");
   }while(1);
}
void import(student s[],xinxi a[])//录入函数
{

    int t1,n;
    scanf("%d",&t1);
    if(t1==0)//输入为0返回主菜单
        menu(stu,xin);
    else if(t1>5||t1<0)//输入错误返回录入菜单
    {
        printf("您输入有误。\n");
        system("pause");
    }
    else
    {
        printf("\t\t请问要输入多少人的信息(或几门课程)?\n");
        scanf("%d",&n);

        while(n<=0||n>32)//判断人数是否输入正确
        {
            printf("您输入有误，请重新输入。\n");
            printf("请问要输入多少人的信息？\n");
            scanf("%d",&n);
            if(n>0&&n<=32)
                break;
        }

        file_a();//打开文件
        int flag=0;
        for(int i=1;i<=31;i++)//判断
        {
            if(s[i].age>0)
                flag++;
        }
        if(flag==31)
            printf("信息已录入满");
        system("pause");
        switch(t1)
                 {
                     case 1://输入基本信息
                     {
                            for(int i=1;i<=n;i++)
                            {
                            printf("请输入第%d位同学的学号,姓名,性别,宿舍号,年龄：\n",i);
                            scanf("%d %s %s %d %d",&s[i].xuehao,s[i].name,s[i].sex,&s[i].num,&s[i].age);

                            /*printf("请输入第%d位同学的姓名：\n",i);
                            scanf("%s",s[i].name);

                            printf("请输入第%d位同学的性别：\n",i);
                            scanf("%s",s[i].sex);

                            printf("请输入第%d位同学的宿舍号：\n",i);
                            scanf("%d",&s[i].num);

                            printf("请输入第%d位同学的年龄：\n",i);
                            scanf("%d",&s[i].age);*/

                            }
                        fprintf_1(stu);//把信息存到文件中去
                     } break;
                     case 2://输入课程信息
                     {
                         for(int i=1;i<=n;i++)
                         {
                         printf("请输入第%d门课程的课程编号,课程名称,课程类别,课程学期,课程学分\n",i);
                         scanf("%s %s %s %d %f",s[i].bianhao,s[i].kecheng,s[i].leibie,&s[i].xueqi,&s[i].xuefen);

                         /*printf("请输入第%d门课程的课程名称\n",i);
                         scanf("%s",s[i].kecheng);

                         printf("请输入第%d门课程的课程类别\n",i);
                         scanf("%s",s[i].leibie);

                         printf("请输入第%d门课程的课程学期\n",i);
                         scanf("%d",&s[i].xueqi);

                         printf("请输入第%d门课程的课程学分\n",i);
                         scanf("%f",&s[i].xuefen);*/

                         }
                         fprintf_2(stu);//把信息存到文件中去

                     } break;
                     case 3://输入成绩信息
                     {
                      //  int t_kc,t_xq;//课程和学期
                        for(int i=1;i<=n;i++)
                         {
                           // printf("请输入第%d位同学的学号\n",i);
                           // scanf("%d",&a[i].xuehao);
                            for(int j=1;j<=6;j++)
                            {
                            printf("请输入第%d位同学的学号,课程编号,考试分数,是否重修,是否挂科\n",i);
                            scanf("%d %s %f %s %s",&a[i].xuehao,a[i].term[1].kc[j].bianhao,
                                  &a[i].term[1].kc[j].score,a[i].term[1].kc[j].chongxiu,a[i].term[1].kc[j].guake);

                            }


                            /*printf("请输入第%d位同学的学号\n",i);
                            scanf("%d",&a[i].xuehao);

                            printf("请问要输入多少门课程？\n");
                            scanf("%d",&t_kc);
                            for(int j=1;j<=t_kc;j++)//课程
                            {
                                printf("输入第%d门课程信息\n",j);
                                printf("请问要输入几个学期的信息\n");
                                scanf("%d",&t_xq);
                                for(int k=1;k<=t_xq;k++)
                                {

                                    printf("输入第%d位同学第%d学期第%d门的考试课程\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].kecheng);

                                    printf("输入第%d位同学第%d学期第%d门的课程编号\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].bianhao);

                                    printf("输入第%d位同学第%d学期第%d门的考试分数\n",i,k,j);
                                    scanf("%f",&a[i].term[k].kc[j].score);

                                    printf("输入第%d位同学第%d学期第%d门是否重修\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].chongxiu);

                                    printf("输入第%d位同学第%d学期第%d门是否挂科\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].guake);
                                }
                            }*/
                         }
                         fprintf_3(xin);//把信息存到文件中去

                     } break;
                     case 4://输入品行成绩
                     {
                          for(int i=1;i<=n;i++)
                         {

                            //printf("请输入第%d位同学的学号\n",i);
                           // scanf("%d",&s[i].xuehao);
                            //int t;
                            //printf("请问要输入第几学期信息？\n");
                           // scanf("%d",&t);
                            for(int k=1;k<=1;k++)
                            {
                                printf("请输入第%d位同学的学号,辅导员评分,班级评分,班主任评分\n",i);
                                scanf("%d %d %f %d",&s[i].xuehao,&s[i].term[1].FDY_pf,&s[i].term[1].BJ_pf,
                                      &s[i].term[1].BZR_pf);

                                /*printf("请输入第%d位同学的班主任评分\n",i);
                                scanf("%d",&s[i].term[k].BZR_pf);

                                printf("请输入第%d位同学的班级评分\n",i);
                                scanf("%d",&s[i].term[k].BJ_pf);*/
                            }
                         }
                         fprintf_4(stu);//把信息存到文件中去

                     }break;
                     case 5://录入奖惩信息，以文件形式保存;
                     {
                        JC_import(stu,n);
                        CH_import(stu,n);
                        fprintf_5(stu);
                     }
                 }
    }
}


