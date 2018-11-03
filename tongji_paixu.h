void tongji(student s[],xinxi a[])
{
    int t3;
    scanf("%d",&t3);
        switch(t3)
        {
        case 1://统计各分数段人数。
            {
                printf("请问您要统计哪一门功课？");
                char kc[100];
                scanf("%s",kc);
                printf("请问您要统计哪一学期？");
                int xq;
                scanf("%d",&xq);
                system("cls");

                int flag=1;
                while(strcmp(kc,a[1].term[xq].kc[flag].kecheng)!=1)
                {
                    flag++;
                }

                int f[10];
                for(int i=0;i<10;i++)
                    f[i]=0;
                for(int i=1;i<=31;i++)
                {
                    if(a[i].term[xq].kc[flag].score>=90.0&&a[i].term[xq].kc[flag].score<=100.0)
                        f[9]++;
                    else if(a[i].term[xq].kc[flag].score<90.0&&a[i].term[xq].kc[flag].score>=80.0)
                        f[8]++;
                    else if(a[i].term[xq].kc[flag].score<80.0&&a[i].term[xq].kc[flag].score>=70.0)
                        f[7]++;
                    else if(a[i].term[xq].kc[flag].score<70.0&&a[i].term[xq].kc[flag].score>=60.0)
                        f[6]++;
                    else if(a[i].term[xq].kc[flag].score<60.0&&a[i].term[xq].kc[flag].score>=50.0)
                        f[5]++;
                    else if(a[i].term[xq].kc[flag].score<50.0&&a[i].term[xq].kc[flag].score>=40.0)
                        f[4]++;
                    else if(a[i].term[xq].kc[flag].score<40.0&&a[i].term[xq].kc[flag].score>=30.0)
                        f[3]++;
                    else if(a[i].term[xq].kc[flag].score<30.0&&a[i].term[xq].kc[flag].score>=20.0)
                        f[2]++;
                    else if(a[i].term[xq].kc[flag].score<20.0&&a[i].term[xq].kc[flag].score>=10.0)
                        f[1]++;
                    else if(a[i].term[xq].kc[flag].score<10.0&&a[i].term[xq].kc[flag].score>0.0)
                        f[0]++;
                }
                printf("成绩在90-100之间的有%d人。\n",f[9]);
                printf("成绩在80-90之间的有%d人。\n",f[8]);
                printf("成绩在70-80之间的有%d人。\n",f[7]);
                printf("成绩在60-70之间的有%d人。\n",f[6]);
                printf("成绩在50-60之间的有%d人。\n",f[5]);
                printf("成绩在40-50之间的有%d人。\n",f[4]);
                printf("成绩在30-40之间的有%d人。\n",f[3]);
                printf("成绩在20-30之间的有%d人。\n",f[2]);
                printf("成绩在10-20之间的有%d人。\n",f[1]);
                printf("成绩在0-10之间的有%d人。\n",f[0]);

            }
        case 2://分学期对学生业务课程平均分按分数段进行统计
            {
                printf("请问要统计哪一学期？");
                int xq;
                scanf("%d",&xq);

                float pj[31],zf[31];//定义总分、平均分变量
                int ff[10];//ff判断处于哪个成绩段
                for(int k=0;k<10;k++)
                {
                    ff[k]=0;
                }//赋初值为0

                for(int i=1;i<=31;i++)
                {
                    zf[i]=0;
                    for(int j=0;j<10;j++)
                    {
                        zf[i]=zf[i]+a[i].term[xq].kc[j].score;//计算总分
                    }
                    pj[i]=zf[i]/10;//计算平均分

                    if(pj[i]>=90&&pj[i]<=100)
                        ff[9]++;
                    else if(pj[i]>=80&&pj[i]<90)
                        ff[8]++;
                    else if(pj[i]>=70&&pj[i]<80)
                        ff[7]++;
                    else if(pj[i]>=60&&pj[i]<70)
                        ff[6]++;
                    else if(pj[i]>=50&&pj[i]<60)
                        ff[5]++;
                    else if(pj[i]>=40&&pj[i]<50)
                        ff[4]++;
                    else if(pj[i]>=30&&pj[i]<40)
                        ff[3]++;
                    else if(pj[i]>=20&&pj[i]<30)
                        ff[2]++;
                    else if(pj[i]>=10&&pj[i]<20)
                        ff[1]++;
                    else if(pj[i]>=0&&pj[i]<10)
                        ff[0]++;
                }
                printf("90-100：%d人\n",ff[9]);
                printf("80-90：%d人\n",ff[8]);
                printf("70-80：%d人\n",ff[7]);
                printf("60-70：%d人\n",ff[6]);
                printf("50-60：%d人\n",ff[5]);
                printf("40-50：%d人\n",ff[4]);
                printf("30-40：%d人\n",ff[3]);
                printf("20-30：%d人\n",ff[2]);
                printf("10-20：%d人\n",ff[1]);
                printf("0-10：%d人\n",ff[0]);
                system("pause");
            }break;
        case 3://统计任意一名同学每门功课的班级排名以及业务课成绩总体排名
            {
                int xh,f1=1;
                float all_cj[31];//总成绩
                int cjpm[5],all_cjpm=1;

                printf("请输入要统计学生的学号：\n");
                scanf("%d",&xh);

                printf("请问要统计哪一学期？");
                int xq;
                scanf("%d",&xq);

                while(xh!=a[f1].xuehao)//判断输入的学号是哪一位学生
                {
                    f1++;
                }

                for(int k=1;k<=15;k++)//课程
                {
                    cjpm[k]=1;
                    int i=1;
                    int cj=a[f1].term[xq].kc[k].score;
                    while(1)
                    {
                        if(cj<a[i+1].term[xq].kc[k].score)
                            cjpm[k]++;
                        i++;
                    }
                }
                for(int i=1;i<=31;i++)
                    all_cj[i]=0;

                for(int k=1;k<=15;k++)//计算所有人的总成绩
                {
                    for(int i=1;i<=31;i++)
                    {
                        all_cj[i]+=a[i].term[xq].kc[k].score;
                    }
                }

                for(int i=1;i<=31;i++)
                {
                    if(all_cj[f1]<all_cj[i])
                    {
                        all_cjpm++;
                    }
                }
                printf("学号\t\t姓名\t总成绩排名\n");
                printf("%d\t%s\t%d",a[f1].xuehao,s[f1].name,all_cjpm);

            }
        case 4://以宿舍为单位进行成绩统计分析
            {
                printf("请问要统计哪一学期？");
                int xq;
                scanf("%d",&xq);

                float f[31],f_ave[31];
                for(int i=1;i<=31;i++)
                    f[i]=0;

                for(int i=1;i<=31;i++)
                {
                    for(int k=1;k<=15;k++)
                    {
                        f[i]+=a[i].term[xq].kc[k].score;//求总成绩
                    }
                    f_ave[i]=f[i]/10;//求平均成绩
                }


                int flag,i;
                printf("请问要统计哪一个宿舍？");
                scanf("%d",&flag);

                printf("\t\t\t%d宿舍\n",flag);
                printf("  学号  \t姓名  \t平均分\n");
                while(1)//输出505宿舍
                {
                    if(s[i].num==flag)
                    {
                        printf("%d\t%s\t%.2f\n",s[i].xuehao,s[i].name,f_ave[i]);
                    }
                    i++;
                }
            }
        case 5://能以挂科次数为依据分学期对比分析
            {
                int flag[T][31];
                for(int k=1;k<=T;k++)//学期
                {
                    for(int i=1;i<=31;i++)//人
                    {
                        flag[k][i]=0;
                        for(int j=1;j<=15;j++)//课程
                        {
                            if(strcmp("否",a[i].term[k].kc[j].guake)==1)
                                flag[k][i]++;
                        }
                    }
                }
                printf("学号\t\t姓名\t第一学期\t第二学期\n");
                for(int i=1;i<=31;i++)
                printf("%d\t%s\t%d次 \t%d次\n",a[i].xuehao,s[i].name,flag[1][i],flag[2][i]);

            }
        case 6://能以业务课班级排名为依据分学期对比分析（前进或退步情况）
            {
                float pj[31][2],zf[31][2];//定义总分、平均分变量
                int mc[31][2];//计算退步或前进的名次的变量

                for(int i=1;i<=31;i++)
                {
                    for(int k=1;k<=2;k++)
                    {
                        zf[i][k]=0;
                        for(int j=0;j<10;j++)
                        {
                            zf[i][k]=zf[i][k]+a[i].term[k].kc[j].score;//计算总分
                        }
                        pj[i][k]=zf[i][k]/10;//计算平均分
                    }
                }
                for(int k=1;k<=2;k++)
                {
                    for(int i=1;i<=31;i++)
                    {
                        mc[i][k]=1;
                        if(pj[i][k]<pj[i+1][k])
                            mc[i][k]++;
                    }
                }
                for(int i=1;i<=31;i++)
                {
                    mc[i][0]=mc[i][2]-mc[i][1];
                }
                printf("学号\t\t姓名\t第1学期\t第2学期\t名次比较(2-1)");
                for(int i=1;i<=31;i++)
                printf("%d\t%s\t%d\t%d\t%d\n",a[i].xuehao,s[i].name,mc[i][1],mc[i][2],mc[i][0]);
            }
        case 0:
            menu(stu,xin);
        default:
            printf("您输入有误。");
            system("pause");
            break;
        }
}
/*void paixu(student s[],xinxi a[])
{
    int t4;
    scanf("%d",&t4);
    if(t4<0||t4>6)
    {
        printf("您输入有误请重新输入。");
        scanf("%d",&t4);
    }
    else if(t3==0)
        menu(stu,xin,n);
    else
    {
        switch(t3)
        {
        case 1://对学生每学期成绩排名及平均分进行排序
            {
                flaot pj[31][2],zf[31][2];//定义总分、平均分变量
                int mc[31][2];
                int pjxh[31][2],mcxh[31][2];

                for(int i=1;i<=n;i++)
                {
                    pjxh[i][1]=a[i][1].xuehao;
                    pjxh[i][2]=a[i][1].xuehao;
                    mcxh[i][1]=a[i][1].xuehao;
                    mcxh[i][2]=a[i][1].xuehao;
                }
                for(int i=1;i<=n;i++)
                {
                    for(int k=1;k<=2;k++)
                    {
                        zf[i][k]=0;
                        for(int j=0;j<10;j++)
                        {
                            zf[i][k]=zf[i][k]+a[i][j].term[k].score;//计算总分
                        }
                        pj[i][k]=zf[i][k]/10;//计算平均分
                    }
                }
                for(int k=1;k<=2;k++)
                {
                    for(int i=1;i<=n;i++)
                    {
                        mc[i][k]=1;
                        if(pj[i][k]<pj[i+1][k])
                            mc[i][k]++;
                    }
                }

                for(int k=1;k<=2;k++)
                {
                    for(int i=1;i<=31;i++)
                    {
                        for(int j=1;j<=i;j++)
                        {
                            if(mc[j][k]>mc[j+1][k])//
                            {
                                int t1,t2;
                                t1=mc[j][k];
                                mc[j][k]=mc[j+1][k];
                                mc[j+1][k]=t1;

                                t2=mcxh[j][k];
                                mcxh[j][k]=mcxh[j+1][k]
                                mcxh[j+1][k]=t2;
                            }
                            if(mc[j][k]>mc[j+1][k])
                            {
                                int t1,t2;
                                t1=mc[j][k];
                                mc[j][k]=mc[j+1][k];
                                mc[j+1][k]=t1;

                                t2=mcxh[j][k];
                                mcxh[j][k]=mcxh[j+1][k]
                                mcxh[j+1][k]=t2;
                            }
                        }
                    }
                    for(int k=1;k<=2;k++)
                    {
                        printf("名次\t第%d学期分数排序\n",k);
                        for(int i=1;i<=n;i++)
                        {
                            printf("%d\t%d\n",i,pjxh[i][k]);
                        }
                        printf("名次\t第%d学期名次排序\n",k);
                        for(int i=1;i<=n;i++)
                        {
                            printf("%d\t%d\n",i,mcxh[i][k]);
                        }
                    }


                }

            }
        case 2://对学生每学期不及格次数排名及门次进行排序
            {

            }
        case 3://对每学期课程不及格的学生数排序及人数进行排序
            {

            }
        case 4://对每学期各宿舍成绩排序及宿舍平均成绩进行排序
            {

            }
        case 5://对学生奖励分数排序进行排序
            {

            }
        case 6://对学生惩罚分数排序进行排序
            {

            }
        default:break;

        }
}*/
