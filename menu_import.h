
void menu(student s[],xinxi a[])//�˵�����
{

    int choice;
    system("color f3");//�ı�������ɫ
    do
   {
       system("cls");//����
    printf("\t\t\t  �����ιܼ�ϵͳ\n");
    printf("\t\t\t------------------\n");
    printf("\t\t\t       �˵�\t\t\n");
    printf("\t\t\t------------------\n");
    printf("\t\t\t  1��¼��ѧ����Ϣ\n\n");
    printf("\t\t\t  2���޸�ѧ����Ϣ\n\n");
    printf("\t\t\t  3��ͳ�Ʒ���\n\n");
    printf("\t\t\t  4���ɼ�����\n\n");
    printf("\t\t\t  5���鿴������Ϣ\n\n");
    printf("\t\t\t  6����ѧ������\n\n");
    printf("\t\t\t  0����������\n");
    printf("\t\t\t------------------\n");
    printf("\t\t����������ѡ�");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1://¼�뺯���˵�
        {
            do
            {
                system("cls");//����
             printf("\t\t\t       �˵�\t\t\n");
             printf("\t\t\t-------------------\n");
             printf("\t\t\t  1��¼�������Ϣ\n\n");
             printf("\t\t\t  2��¼��γ���Ϣ\n\n");
             printf("\t\t\t  3��¼��ѧϰ�ɼ�\n\n");
             printf("\t\t\t  4��¼��Ʒ�гɼ�\n\n");
             printf("\t\t\t  5��¼�뽱����Ϣ\n\n");
             printf("\t\t\t  0��������һ���˵�\n");
             printf("\t\t\t-------------------\n");
             printf("\t\t����������ѡ�");
             //student stu[N];
             import(stu,xin);
            }while(1);
        } break;
        case 2://�޸ĺ����˵�
        {

            do
            {
                system("cls");
             printf("\t\t\t       �˵�\t\t\n");
             printf("\t\t\t-------------------\n");
             printf("\t\t\t  1���޸Ļ�����Ϣ\n\n");
             printf("\t\t\t  2���޸Ŀγ���Ϣ\n\n");
             printf("\t\t\t  3���޸�ѧϰ�ɼ�\n\n");
             printf("\t\t\t  4���޸�Ʒ�гɼ�\n\n");
             printf("\t\t\t  5���޸Ľ�����Ϣ\n\n");
             printf("\t\t\t  0��������һ���˵�\n\n");
             printf("\t\t����������ѡ�");
             printf("\t\t\t-------------------\n");
             //student stu[N];
             alter(stu,xin);
             }while(1);
        } break;
        case 3://ͳ�Ʒ���
        {
            do
            {
                system("cls");
            printf("\t\t\t\t�˵�\t\t\n");
            printf("\t\t---------------------------------------\n");
            printf("\t\t  1����ĳ�Ź��θ������γɼ�����ͳ��\n\n");
            printf("\t\t  2����ѧ�ڶ�ѧ��ҵ��γ�ƽ���ְ������ν���ͳ��\n\n");
            printf("\t\t  3��ͳ������һ��ͬѧÿ�Ź��εİ༶�����Լ�ҵ��γɼ���������\n\n");
            printf("\t\t  4��������Ϊ��λ���гɼ�ͳ�Ʒ���\n\n");
            printf("\t\t  5���Թҿƴ���Ϊ���ݷ�ѧ�ڶԱȷ���\n\n");
            printf("\t\t  6����ҵ��ΰ༶����Ϊ���ݷ�ѧ�ڶԱȷ���(ǰ�����˲����)\n\n");
            printf("\t\t  0��������һ���˵�\n");
            printf("\t\t--------------------------------------\n");
            printf("����������ѡ�");
            tongji(stu,xin);
            }while(1);
        } break;
        case 4://����
        {
            do{
                system("cls");
            printf("\t\t\t\t�˵�\t\t\n");
            printf("\t\t-------------------------------------\n");
            printf("\t\t  1����ѧ��ÿѧ�ڳɼ�������ƽ���ֽ�������\n\n");
            printf("\t\t  2����ѧ��ÿѧ�ڲ���������������Ŵν�������\n\n");
            printf("\t\t  3����ÿѧ�ڿγ̲������ѧ��������������������\n\n");
            printf("\t\t  4����ÿѧ�ڸ�����ɼ���������ƽ���ɼ���������\n\n");
            printf("\t\t  5����ѧ���������������������\n\n");
            printf("\t\t  6����ѧ���ͷ����������������\n\n");
            printf("\t\t  0��������һ���˵�\n");
            printf("\t\t-------------------------------------\n");
            printf("����������ѡ�");
            system("pause");
            }while(1);
        } break;
        case 5://�鿴������Ϣ
        {
            do
            {
                system("cls");
            printf("\t\t       �˵�\t\t\n");
            printf("\t\t------------------\n");
            printf("\t\t  1���鿴������Ϣ\n\n");
            printf("\t\t  2���鿴�γ���Ϣ\n\n");
            printf("\t\t  3���鿴��һѧ�ڳɼ�\n\n");
            printf("\t\t  4���鿴�ڶ�ѧ�ڳɼ�\n\n");
            printf("\t\t  5���鿴Ʒ�гɼ�\n\n");
            printf("\t\t  6���鿴��һѧ�ڽ��ͳɼ�\n\n");
            printf("\t\t  7���鿴�ڶ�ѧ�ڽ��ͳɼ�\n\n");
            printf("\t\t  0��������һ���˵�\n");
            printf("����������ѡ�");
            run_outport(stu,xin);
            }while(1);
        } break;
        case 6://��ѧ������
        {
            do
            {
                system("cls");
            printf("\t\t       �˵�\t\t\n");
            printf("\t\t------------------\n");
            printf("\t\t  1����һѧ���ܻ�õĽ�ѧ������\n\n");
            printf("\t\t  2���ڶ�ѧ���ܻ�õĽ�ѧ������\n\n");
            printf("\t\t  0��������һ���˵�\n");
            printf("����������ѡ�");
            int t6;
            scanf("%d",&t6);
            system("cls");
            printf("һ�Ƚ������� 1508100215\n\n");
            printf("���Ƚ��������� 1508100218\n\n");
            printf("���Ƚ�������� 1508100212\n\n");
            printf("���Ƚ����Խ� 1508100220\n\n");
            printf("���Ƚ������� 1508100230\n\n");
            printf("���Ƚ��������� 1508100228\n\n");
            printf("���Ƚ��������� 1508100213\n\n");
            printf("���Ƚ���ɣ�Ĭu 1508100229\n\n");
            system("pause");
            }while(1);
        } break;
        case 0:exit(0);break;
        default:printf("������������");break;
    }
    system("pause");
   }while(1);
}
void import(student s[],xinxi a[])//¼�뺯��
{

    int t1,n;
    scanf("%d",&t1);
    if(t1==0)//����Ϊ0�������˵�
        menu(stu,xin);
    else if(t1>5||t1<0)//������󷵻�¼��˵�
    {
        printf("����������\n");
        system("pause");
    }
    else
    {
        printf("\t\t����Ҫ��������˵���Ϣ(���ſγ�)?\n");
        scanf("%d",&n);

        while(n<=0||n>32)//�ж������Ƿ�������ȷ
        {
            printf("�������������������롣\n");
            printf("����Ҫ��������˵���Ϣ��\n");
            scanf("%d",&n);
            if(n>0&&n<=32)
                break;
        }

        file_a();//���ļ�
        int flag=0;
        for(int i=1;i<=31;i++)//�ж�
        {
            if(s[i].age>0)
                flag++;
        }
        if(flag==31)
            printf("��Ϣ��¼����");
        system("pause");
        switch(t1)
                 {
                     case 1://���������Ϣ
                     {
                            for(int i=1;i<=n;i++)
                            {
                            printf("�������%dλͬѧ��ѧ��,����,�Ա�,�����,���䣺\n",i);
                            scanf("%d %s %s %d %d",&s[i].xuehao,s[i].name,s[i].sex,&s[i].num,&s[i].age);

                            /*printf("�������%dλͬѧ��������\n",i);
                            scanf("%s",s[i].name);

                            printf("�������%dλͬѧ���Ա�\n",i);
                            scanf("%s",s[i].sex);

                            printf("�������%dλͬѧ������ţ�\n",i);
                            scanf("%d",&s[i].num);

                            printf("�������%dλͬѧ�����䣺\n",i);
                            scanf("%d",&s[i].age);*/

                            }
                        fprintf_1(stu);//����Ϣ�浽�ļ���ȥ
                     } break;
                     case 2://����γ���Ϣ
                     {
                         for(int i=1;i<=n;i++)
                         {
                         printf("�������%d�ſγ̵Ŀγ̱��,�γ�����,�γ����,�γ�ѧ��,�γ�ѧ��\n",i);
                         scanf("%s %s %s %d %f",s[i].bianhao,s[i].kecheng,s[i].leibie,&s[i].xueqi,&s[i].xuefen);

                         /*printf("�������%d�ſγ̵Ŀγ�����\n",i);
                         scanf("%s",s[i].kecheng);

                         printf("�������%d�ſγ̵Ŀγ����\n",i);
                         scanf("%s",s[i].leibie);

                         printf("�������%d�ſγ̵Ŀγ�ѧ��\n",i);
                         scanf("%d",&s[i].xueqi);

                         printf("�������%d�ſγ̵Ŀγ�ѧ��\n",i);
                         scanf("%f",&s[i].xuefen);*/

                         }
                         fprintf_2(stu);//����Ϣ�浽�ļ���ȥ

                     } break;
                     case 3://����ɼ���Ϣ
                     {
                      //  int t_kc,t_xq;//�γ̺�ѧ��
                        for(int i=1;i<=n;i++)
                         {
                           // printf("�������%dλͬѧ��ѧ��\n",i);
                           // scanf("%d",&a[i].xuehao);
                            for(int j=1;j<=6;j++)
                            {
                            printf("�������%dλͬѧ��ѧ��,�γ̱��,���Է���,�Ƿ�����,�Ƿ�ҿ�\n",i);
                            scanf("%d %s %f %s %s",&a[i].xuehao,a[i].term[1].kc[j].bianhao,
                                  &a[i].term[1].kc[j].score,a[i].term[1].kc[j].chongxiu,a[i].term[1].kc[j].guake);

                            }


                            /*printf("�������%dλͬѧ��ѧ��\n",i);
                            scanf("%d",&a[i].xuehao);

                            printf("����Ҫ��������ſγ̣�\n");
                            scanf("%d",&t_kc);
                            for(int j=1;j<=t_kc;j++)//�γ�
                            {
                                printf("�����%d�ſγ���Ϣ\n",j);
                                printf("����Ҫ���뼸��ѧ�ڵ���Ϣ\n");
                                scanf("%d",&t_xq);
                                for(int k=1;k<=t_xq;k++)
                                {

                                    printf("�����%dλͬѧ��%dѧ�ڵ�%d�ŵĿ��Կγ�\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].kecheng);

                                    printf("�����%dλͬѧ��%dѧ�ڵ�%d�ŵĿγ̱��\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].bianhao);

                                    printf("�����%dλͬѧ��%dѧ�ڵ�%d�ŵĿ��Է���\n",i,k,j);
                                    scanf("%f",&a[i].term[k].kc[j].score);

                                    printf("�����%dλͬѧ��%dѧ�ڵ�%d���Ƿ�����\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].chongxiu);

                                    printf("�����%dλͬѧ��%dѧ�ڵ�%d���Ƿ�ҿ�\n",i,k,j);
                                    scanf("%s",a[i].term[k].kc[j].guake);
                                }
                            }*/
                         }
                         fprintf_3(xin);//����Ϣ�浽�ļ���ȥ

                     } break;
                     case 4://����Ʒ�гɼ�
                     {
                          for(int i=1;i<=n;i++)
                         {

                            //printf("�������%dλͬѧ��ѧ��\n",i);
                           // scanf("%d",&s[i].xuehao);
                            //int t;
                            //printf("����Ҫ����ڼ�ѧ����Ϣ��\n");
                           // scanf("%d",&t);
                            for(int k=1;k<=1;k++)
                            {
                                printf("�������%dλͬѧ��ѧ��,����Ա����,�༶����,����������\n",i);
                                scanf("%d %d %f %d",&s[i].xuehao,&s[i].term[1].FDY_pf,&s[i].term[1].BJ_pf,
                                      &s[i].term[1].BZR_pf);

                                /*printf("�������%dλͬѧ�İ���������\n",i);
                                scanf("%d",&s[i].term[k].BZR_pf);

                                printf("�������%dλͬѧ�İ༶����\n",i);
                                scanf("%d",&s[i].term[k].BJ_pf);*/
                            }
                         }
                         fprintf_4(stu);//����Ϣ�浽�ļ���ȥ

                     }break;
                     case 5://¼�뽱����Ϣ�����ļ���ʽ����;
                     {
                        JC_import(stu,n);
                        CH_import(stu,n);
                        fprintf_5(stu);
                     }
                 }
    }
}


