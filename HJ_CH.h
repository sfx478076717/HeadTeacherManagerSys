void JC_import(student s[],int n)//����Ϣ
{
    system("cls");
for(int i=1;i<=n;i++)
{
    printf("�������%dλѧ����ѧ�ţ�(¼�����Ϣ)\n",i);
    scanf("%d",&s[i].xuehao);
    printf("��ѡ��\n");
    printf("����1����ѧ�𡪡�\n");
    printf("����2���������֡���\n");
    printf("����3��ѧ�ƾ�������\n");
    printf("�����룺");
    int f;
    scanf("%d",&f);
    system("cls");
    switch(f)
    {
        case 1:
        {
            printf("����������ѧ�𡪡�����\n");
            printf("����1�����ѧ�𡪡�\n");
            printf("����2�����Ƚ�ѧ�𡪡�\n");
            printf("����3�����Ƚ�ѧ�𡪡�\n");
            printf("����4��һ�Ƚ�ѧ�𡪡�\n");
            printf("����5���صȽ�ѧ�𡪡�\n");
            printf("����6��У����ѧ�𡪡�\n");
            printf("����0��δ��á�������\n");
            printf("�����룺");
            int f1;
            scanf("%d",&f1);
                switch(f1)
                {
                case 1:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "���ѧ��");
                        s[i].HJ_score=1;
                    }break;
                case 2:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "���Ƚ�ѧ��");
                        s[i].HJ_score=2;
                    }break;
                case 3:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "���Ƚ�ѧ��");
                        s[i].HJ_score=3;
                    }break;
                case 4:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "һ�Ƚ�ѧ��");
                        s[i].HJ_score=4;
                    }break;
                case 5:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "�صȽ�ѧ��");
                        s[i].HJ_score=5;
                    }break;
                case 6:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "У����ѧ��");
                        s[i].HJ_score=6;
                    }break;
                default:break;
                }
                }break;
        case 2:
        {
            printf("���������������֡�������\n");
            printf("����1��У��������ˡ���\n");
            printf("����2��ʡ��������ˡ���\n");
            printf("����3�����Ҽ�������ˡ���\n");
            printf("����0��δ��á�������\n");
            printf("�����룺");
            int f2;
            scanf("%d",&f2);
            switch(f2)
            {
                case 1:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "У���������");
                        s[i].HJ_score=3;
                    }break;
                case 2:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "ʡ���������");
                        s[i].HJ_score=6;
                    }break;
                case 3:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "���Ҽ��������");
                        s[i].HJ_score=12;
                    }break;
                default:break;
                }
                }break;
        case 3:
        {
            printf("��������ѧ�ƾ�����������\n");
            printf("����1��ʡ������ѧ�ƾ����ɹ�����������\n");
            printf("����2��ʡ�����Ƚ�����\n");
            printf("����3��ʡ�����Ƚ�����\n");
            printf("����4��ʡ��һ�Ƚ�����\n");
            printf("����5�����Ҽ����Ƚ�����\n");
            printf("����6�����Ҽ����Ƚ�����\n");
            printf("����7�����Ҽ�һ�Ƚ�����\n");
            printf("����8��У�����Ƚ�����\n");
            printf("����9��У�����Ƚ�����\n");
            printf("����10��У��һ�Ƚ�����\n");
            printf("����0��δ��á�������\n");
            printf("�����룺");
            int f3;
            scanf("%d",&f3);
                switch(f3)
                {
                case 1:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "ʡ������ѧ�ƾ����ɹ�������");
                        s[i].HJ_score=1;
                    }break;
                case 2:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "ʡ�����Ƚ�");
                        s[i].HJ_score=4;
                    }break;
                case 3:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "ʡ�����Ƚ�");
                        s[i].HJ_score=5;
                    }break;
                case 4:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "ʡ��һ�Ƚ�");
                        s[i].HJ_score=6;
                    }break;
                case 5:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "���Ҽ����Ƚ�");
                        s[i].HJ_score=6;
                    }break;
                case 6:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "���Ҽ����Ƚ�");
                        s[i].HJ_score=9;
                    }break;
                case 7:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "���Ҽ�һ�Ƚ�");
                        s[i].HJ_score=12;
                    }break;
                case 8:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "У�����Ƚ�");
                        s[i].HJ_score=1;
                    }break;
                case 9:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "У�����Ƚ�");
                        s[i].HJ_score=2;
                    }break;
                case 10:
                    {
                        printf("�������ʱ�䣺");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "У��һ�Ƚ�");
                        s[i].HJ_score=3;
                    }break;
                default:break;
                }
        }break;
        default:break;
    }
}
}
void CH_import(student s[],int n)
{
    system("cls");
for(int i=1;i<=n;i++)
{
    int f4;
    printf("�������%dλѧ����ѧ�ţ�(¼��ʹ���Ϣ)\n",i);
    scanf("%d",&s[i].xuehao);
    printf("�����ܵ���ʲô�ͷ���\n");
    printf("1��ͨ������\n");
    printf("2��У������\n");
    printf("3�����ؾ���\n");
    printf("4���ǹ�\n");
    printf("5���Ǵ��\n");
    printf("6������ѧ��\n");
    printf("0���޳ͷ�\n");
    scanf("%d",&f4);
    system("cls");
        switch(f4)
            {
                case 1:
                    {
                        printf("������ʹ�ʱ�䣺\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "ͨ������");
                        s[i].CH_score=-1;
                    }break;
                case 2:
                    {
                        printf("������ʹ�ʱ�䣺\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "ͨ������");
                        s[i].CH_score=-2;
                    }break;
                case 3:
                    {
                        printf("������ʹ�ʱ�䣺\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "ͨ������");
                        s[i].CH_score=-3;
                    }break;
                case 4:
                    {
                        printf("������ʹ�ʱ�䣺\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "ͨ������");
                        s[i].CH_score=-4;
                    }break;
                case 5:
                    {
                        printf("������ʹ�ʱ�䣺\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "ͨ������");
                        s[i].CH_score=-5;
                    }break;
                case 6:
                    {
                        printf("������ʹ�ʱ�䣺\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "ͨ������");
                        s[i].CH_score=-6;
                    }break;
                default:
                    strcpy(s[i].CH_lb,"�޳ͷ�");
                    break;
            }
}
}
