void run_outport(student s[],xinxi a[])
{
    int t5;
    scanf("%d",&t5);
    system("cls");
    switch(t5)
    {
    case 1://�鿴������Ϣ
        {
            jb_outport(stu);
            system("pause");
        }break;
    case 2://�鿴�γ���Ϣ
        {
            kc_outport(stu);
            system("pause");
        }break;
    case 3://�鿴��һѧ�ڳɼ�
        {
            cj_outport(xin);
        }break;
    case 4://�鿴�ڶ�ѧ�ڳɼ�
        {

        }break;
    case 5://�鿴Ʒ�гɼ�
        {
            px_outport(stu);
            system("pause");
        }break;
    case 6://�鿴��һѧ�ڽ��ͳɼ�
        {

        }break;
    case 7://�鿴�ڶ�ѧ�ڽ��ͳɼ�
        {

        }break;
    case 0:
        menu(stu,xin);
        break;
    default:
        printf("����������");
        system("pause");
        break;
    }
}

void jb_outport(student s[])//���������Ϣ
{
    if ((jbxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\������Ϣ", "r+")) == NULL)
    {
        printf("�޷����ļ�\n");
        exit(0);
    }
    int i=1;
     while(!feof(jbxx))//�ж��ļ��Ƿ����
    {
        //fscanf(jbxx,"%d %s %s %d %d\n",&s[i].xuehao,s[i].name,s[i].sex,&s[i].num,&s[i].age);
        fread(&(s[i]),sizeof(student),1,jbxx);
        i++;
    }
    system("cls");
    printf("ѧ��  \t\t����\t�Ա�\t�����\t����\n");
    for(int i=1;i<=31;i++)
    {
    printf("%d\t%s\t%s\t%d\t%d\n",s[i].xuehao,s[i].name,s[i].sex,s[i].num,s[i].age);
    }
    fclose(jbxx);
}
void kc_outport(student s[])//����γ���Ϣ
{
    if ((kcxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\�γ���Ϣ", "r+")) == NULL)
    {
        printf("�޷����ļ�\n");
        exit(0);
    }
    int i=1;
     while(!feof(kcxx))//�ж��ļ��Ƿ����
    {
        fread(&(s[i]),sizeof(student),1,kcxx);
        i++;
    }
    system("cls");
    printf("�γ̱��\t�γ�����\t�γ���� �γ�ѧ�� �γ�ѧ��\n");
    for(int i=1;i<=15;i++)
    {
    printf("%s\t%s\t%s\t\t%d\t%.2f\n",s[i].bianhao,s[i].kecheng,s[i].leibie,s[i].xueqi,s[i].xuefen);
    }
    fclose(kcxx);
}
void px_outport(student s[])//���Ʒ�гɼ�
{
    if ((pxcj = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\Ʒ����Ϣ", "r+")) == NULL)
    {
        printf("�޷����ļ�\n");
        exit(0);
    }
    int i=1;
     while(!feof(pxcj))//�ж��ļ��Ƿ����
    {
        fread(&(s[i]),sizeof(student),1,pxcj);
        i++;
    }
    system("cls");
    printf("��һѧ��\n");
    printf("ѧ��\t\t���������� ����Ա���� �༶����\n");
    for(int i=1;i<=31;i++)
    {
    printf("%d\t%d\t\t%d\t%.3f\n",s[i].xuehao,s[i].term[1].FDY_pf,
           s[i].term[1].BZR_pf,s[i].term[1].BJ_pf);
    }
    fclose(pxcj);
}
void cj_outport(xinxi a[])
{
    if ((cjxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\�ɼ���Ϣ", "r+")) == NULL)
    {
        printf("�޷����ļ�\n");
        exit(0);
    }
    int i=1;
     while(!feof(cjxx))//�ж��ļ��Ƿ����
    {
        fread(&(a[i]),sizeof(student),1,cjxx);
        i++;
    }
    system("cls");
    printf("��һѧ��\n");
    printf("ѧ��\t\t���Կγ� �γ̱�� ���Է��� �Ƿ�ҿ� �Ƿ�����\n");
    for(int i=1;i<=31;i++)
        for(int j=1;j<=6;j++)
    {
    printf("%d\t%s\t%.3f\t%s\t%s\n",a[i].xuehao,a[i].term[1].kc[j].bianhao,
           a[i].term[1].kc[j].score,a[i].term[1].kc[j].chongxiu,a[i].term[1].kc[j].guake);
    }
    fclose(cjxx);
}
