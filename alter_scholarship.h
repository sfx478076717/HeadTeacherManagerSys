void alter(student s[],xinxi a[])//�޸ĺ���
{
    int t2;
    scanf("%d",&t2);

        switch(t2)
        {
            case 1://�޸Ļ�����Ϣ
            {
                int i=0,flag,xh;
                jb_outport(stu);

                file_w_1();//��w+�ķ�ʽ��д������Ϣ
                scanf_1(stu);

                printf("������Ҫ�޸�ѧ����ѧ�ţ�");
                scanf("%d",&xh);
                while(xh!=s[i].xuehao)
                {
                    i++;
                }
                flag=i;

                printf("����Ҫ�������޸ĳ�ʲô��\n");
                scanf("%s",s[flag].name);

                printf("����Ҫ���Ա��޸ĳ�ʲô��\n");
                scanf("%s",s[flag].sex);


                printf("����Ҫ��������޸ĳ�ʲô��\n");
                scanf("%d",&s[flag].num);

                printf("����Ҫ�������޸ĳ�ʲô��\n");
                scanf("%d",&s[flag].age);

                fprintf_1(stu);//�ѻ�����Ϣ�浽�ļ�
            }break;
            case 2://�޸Ŀγ���Ϣ
            {
                int i=1,flag;
                char kc[100];
                kc_outport(stu);
                file_w_2();//��w+�ķ�ʽ��д�γ���Ϣ
                scanf_2(stu);

                printf("������Ҫ�޸ĵĿγ̱�ţ�");
                scanf("%s",kc);
                while(strcmp(kc,s[i].bianhao)==0)
                {
                    i++;
                }
                flag=i;


                printf("����Ҫ���γ������޸ĳ�ʲô��\n");
                scanf("%s",s[flag].kecheng);

                printf("����Ҫ���γ�����޸ĳ�ʲô��\n");
                scanf("%s",s[flag].leibie);

                printf("����Ҫ���γ�ѧ���޸ĳ�ʲô��\n");
                scanf("%d",&s[flag].xueqi);

                printf("����Ҫ���γ�ѧ���޸ĳ�ʲô��\n");
                scanf("%f",&s[flag].xuefen);

                fprintf_2(stu);//�ѿγ���Ϣ�浽�ļ�
            }break;
            case 3://�޸ĳɼ���Ϣ
            {
                file_w_3();//��w+�ķ�ʽ��д�γ���Ϣ
                scanf_3(xin);

                int i=0,flag,xh;
                printf("������Ҫ�޸�ѧ����ѧ�ţ�");
                scanf("%d",&xh);
                while(xh!=s[i].xuehao)
                {
                    i++;
                }
                flag=i;

                int kc=1,xq;
                char kc1[100];
                printf("����Ҫ�޸���һ�ſγ̣�\n");
                scanf("%s",kc1);
                while(strcmp(kc1,a[flag].term[xq].kc[kc].kecheng)!=1)
                {
                    kc++;
                }

                printf("����Ҫ�޸���һѧ�ڣ�");
                scanf("%d",&xq);
             //   cj_outport(xin,kc,xq);

                printf("����Ҫ���γ̱���޸ĳ�ʲô��\n");
                scanf("%s",a[flag].term[xq].kc[kc].bianhao);

                printf("����Ҫ�����Է����޸ĳ�ʲô��\n");
                scanf("%f",&a[flag].term[xq].kc[kc].score);

                printf("����Ҫ��������Ϣ�޸ĳ�ʲô��\n");
                scanf("%s",a[flag].term[xq].kc[kc].chongxiu);

                printf("����Ҫ���ҿ���Ϣ�޸ĳ�ʲô��\n");
                scanf("%s",a[flag].term[xq].kc[kc].guake);

                fprintf_3(xin);//�ѳɼ���Ϣ�浽�ļ�
            }break;
            case 4://�޸�Ʒ�гɼ�
            {
                int xq;
                printf("����Ҫ�޸���һѧ�ڣ�");
                scanf("%d",&xq);

                int i=0,flag,xh;
                //px_outport(stu,xq);
                file_w_4();//��w+�ķ�ʽ��дƷ�гɼ�
                scanf_4(stu);
                printf("������Ҫ�޸�ѧ����ѧ�ţ�");
                scanf("%d",&xh);

                while(xh!=s[i].xuehao)
                {
                    i++;
                }
                flag=i;

                printf("����Ҫ������Ա�����޸ĳ�ʲô��\n");
                scanf("%d",&s[flag].term[xq].FDY_pf);

                printf("����Ҫ�������������޸ĳ�ʲô��\n");
                scanf("%d",&s[flag].term[xq].BZR_pf);

                printf("����Ҫ���༶�����޸ĳ�ʲô��\n");
                scanf("%f",&s[flag].term[xq].BJ_pf);

                fprintf_4(stu);//��Ʒ�гɼ��浽�ļ�
            }break;
            case 5://�޸Ľ�����Ϣ
            {


            }break;
            case 0://�������˵�
            {
                menu(stu,xin);
            }break;
            default:{
                printf("�������������������롣");
                system("pause");
            }break;
        }
}
