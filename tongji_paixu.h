void tongji(student s[],xinxi a[])
{
    int t3;
    scanf("%d",&t3);
        switch(t3)
        {
        case 1://ͳ�Ƹ�������������
            {
                printf("������Ҫͳ����һ�Ź��Σ�");
                char kc[100];
                scanf("%s",kc);
                printf("������Ҫͳ����һѧ�ڣ�");
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
                printf("�ɼ���90-100֮�����%d�ˡ�\n",f[9]);
                printf("�ɼ���80-90֮�����%d�ˡ�\n",f[8]);
                printf("�ɼ���70-80֮�����%d�ˡ�\n",f[7]);
                printf("�ɼ���60-70֮�����%d�ˡ�\n",f[6]);
                printf("�ɼ���50-60֮�����%d�ˡ�\n",f[5]);
                printf("�ɼ���40-50֮�����%d�ˡ�\n",f[4]);
                printf("�ɼ���30-40֮�����%d�ˡ�\n",f[3]);
                printf("�ɼ���20-30֮�����%d�ˡ�\n",f[2]);
                printf("�ɼ���10-20֮�����%d�ˡ�\n",f[1]);
                printf("�ɼ���0-10֮�����%d�ˡ�\n",f[0]);

            }
        case 2://��ѧ�ڶ�ѧ��ҵ��γ�ƽ���ְ������ν���ͳ��
            {
                printf("����Ҫͳ����һѧ�ڣ�");
                int xq;
                scanf("%d",&xq);

                float pj[31],zf[31];//�����ܷ֡�ƽ���ֱ���
                int ff[10];//ff�жϴ����ĸ��ɼ���
                for(int k=0;k<10;k++)
                {
                    ff[k]=0;
                }//����ֵΪ0

                for(int i=1;i<=31;i++)
                {
                    zf[i]=0;
                    for(int j=0;j<10;j++)
                    {
                        zf[i]=zf[i]+a[i].term[xq].kc[j].score;//�����ܷ�
                    }
                    pj[i]=zf[i]/10;//����ƽ����

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
                printf("90-100��%d��\n",ff[9]);
                printf("80-90��%d��\n",ff[8]);
                printf("70-80��%d��\n",ff[7]);
                printf("60-70��%d��\n",ff[6]);
                printf("50-60��%d��\n",ff[5]);
                printf("40-50��%d��\n",ff[4]);
                printf("30-40��%d��\n",ff[3]);
                printf("20-30��%d��\n",ff[2]);
                printf("10-20��%d��\n",ff[1]);
                printf("0-10��%d��\n",ff[0]);
                system("pause");
            }break;
        case 3://ͳ������һ��ͬѧÿ�Ź��εİ༶�����Լ�ҵ��γɼ���������
            {
                int xh,f1=1;
                float all_cj[31];//�ܳɼ�
                int cjpm[5],all_cjpm=1;

                printf("������Ҫͳ��ѧ����ѧ�ţ�\n");
                scanf("%d",&xh);

                printf("����Ҫͳ����һѧ�ڣ�");
                int xq;
                scanf("%d",&xq);

                while(xh!=a[f1].xuehao)//�ж������ѧ������һλѧ��
                {
                    f1++;
                }

                for(int k=1;k<=15;k++)//�γ�
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

                for(int k=1;k<=15;k++)//���������˵��ܳɼ�
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
                printf("ѧ��\t\t����\t�ܳɼ�����\n");
                printf("%d\t%s\t%d",a[f1].xuehao,s[f1].name,all_cjpm);

            }
        case 4://������Ϊ��λ���гɼ�ͳ�Ʒ���
            {
                printf("����Ҫͳ����һѧ�ڣ�");
                int xq;
                scanf("%d",&xq);

                float f[31],f_ave[31];
                for(int i=1;i<=31;i++)
                    f[i]=0;

                for(int i=1;i<=31;i++)
                {
                    for(int k=1;k<=15;k++)
                    {
                        f[i]+=a[i].term[xq].kc[k].score;//���ܳɼ�
                    }
                    f_ave[i]=f[i]/10;//��ƽ���ɼ�
                }


                int flag,i;
                printf("����Ҫͳ����һ�����᣿");
                scanf("%d",&flag);

                printf("\t\t\t%d����\n",flag);
                printf("  ѧ��  \t����  \tƽ����\n");
                while(1)//���505����
                {
                    if(s[i].num==flag)
                    {
                        printf("%d\t%s\t%.2f\n",s[i].xuehao,s[i].name,f_ave[i]);
                    }
                    i++;
                }
            }
        case 5://���Թҿƴ���Ϊ���ݷ�ѧ�ڶԱȷ���
            {
                int flag[T][31];
                for(int k=1;k<=T;k++)//ѧ��
                {
                    for(int i=1;i<=31;i++)//��
                    {
                        flag[k][i]=0;
                        for(int j=1;j<=15;j++)//�γ�
                        {
                            if(strcmp("��",a[i].term[k].kc[j].guake)==1)
                                flag[k][i]++;
                        }
                    }
                }
                printf("ѧ��\t\t����\t��һѧ��\t�ڶ�ѧ��\n");
                for(int i=1;i<=31;i++)
                printf("%d\t%s\t%d�� \t%d��\n",a[i].xuehao,s[i].name,flag[1][i],flag[2][i]);

            }
        case 6://����ҵ��ΰ༶����Ϊ���ݷ�ѧ�ڶԱȷ�����ǰ�����˲������
            {
                float pj[31][2],zf[31][2];//�����ܷ֡�ƽ���ֱ���
                int mc[31][2];//�����˲���ǰ�������εı���

                for(int i=1;i<=31;i++)
                {
                    for(int k=1;k<=2;k++)
                    {
                        zf[i][k]=0;
                        for(int j=0;j<10;j++)
                        {
                            zf[i][k]=zf[i][k]+a[i].term[k].kc[j].score;//�����ܷ�
                        }
                        pj[i][k]=zf[i][k]/10;//����ƽ����
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
                printf("ѧ��\t\t����\t��1ѧ��\t��2ѧ��\t���αȽ�(2-1)");
                for(int i=1;i<=31;i++)
                printf("%d\t%s\t%d\t%d\t%d\n",a[i].xuehao,s[i].name,mc[i][1],mc[i][2],mc[i][0]);
            }
        case 0:
            menu(stu,xin);
        default:
            printf("����������");
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
        printf("�������������������롣");
        scanf("%d",&t4);
    }
    else if(t3==0)
        menu(stu,xin,n);
    else
    {
        switch(t3)
        {
        case 1://��ѧ��ÿѧ�ڳɼ�������ƽ���ֽ�������
            {
                flaot pj[31][2],zf[31][2];//�����ܷ֡�ƽ���ֱ���
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
                            zf[i][k]=zf[i][k]+a[i][j].term[k].score;//�����ܷ�
                        }
                        pj[i][k]=zf[i][k]/10;//����ƽ����
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
                        printf("����\t��%dѧ�ڷ�������\n",k);
                        for(int i=1;i<=n;i++)
                        {
                            printf("%d\t%d\n",i,pjxh[i][k]);
                        }
                        printf("����\t��%dѧ����������\n",k);
                        for(int i=1;i<=n;i++)
                        {
                            printf("%d\t%d\n",i,mcxh[i][k]);
                        }
                    }


                }

            }
        case 2://��ѧ��ÿѧ�ڲ���������������Ŵν�������
            {

            }
        case 3://��ÿѧ�ڿγ̲������ѧ��������������������
            {

            }
        case 4://��ÿѧ�ڸ�����ɼ���������ƽ���ɼ���������
            {

            }
        case 5://��ѧ���������������������
            {

            }
        case 6://��ѧ���ͷ����������������
            {

            }
        default:break;

        }
}*/
