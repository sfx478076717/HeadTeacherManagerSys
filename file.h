void file_a()//��ab+����ʽд���ļ�ĩβ
{
    if ((jbxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\������Ϣ", "ab+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
     if ((kcxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\�γ���Ϣ", "ab+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
     if ((cjxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\�ɼ���Ϣ", "ab+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
     if ((pxcj = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\Ʒ����Ϣ", "ab+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
     if ((jcxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\������Ϣ", "ab+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
}
void file_w_1()//��wb+�ķ�ʽ��д������Ϣ
{
    if ((jbxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\������Ϣ", "wb+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
}
void file_w_2()//��wb+�ķ�ʽ��д�γ���Ϣ
{
    if ((kcxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\�γ���Ϣ", "wb+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
}
void file_w_3()//��wb+�ķ�ʽ��д�ɼ���Ϣ
{
    if ((cjxx = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\�ɼ���Ϣ", "wb+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
}
void file_w_4()//��wb+�ķ�ʽ��дƷ�гɼ�
{
    if ((pxcj = fopen("D:\\�����ҵ\\cʵѵ��ҵ\\�����ιܼ�ϵͳ\\�ļ��ĵ�\\Ʒ����Ϣ", "wb+")) == NULL)
     {
        printf("�޷����ļ�\n");
        exit(0);
     }
}

void scanf_1(student s[])//�ѻ�����Ϣ���ļ���ȡ����
{
    int i=1;
    while(!feof(jbxx))//�ж��ļ��Ƿ����
    {
        //fscanf(jbxx,"%d %s %s %d %d\n",&s[i].xuehao,s[i].name,s[i].sex,&s[i].num,&s[i].age);
        fread(&(s[i]),sizeof(student),1,jbxx);
        i++;
    }
}
void scanf_2(student s[])//�ѿγ���Ϣ���ļ���ȡ����
{
    int i=1;
    while(!feof(kcxx))//�ж��ļ��Ƿ����
    {
        //fscanf(kcxx,"%s %s %s %d %d\n",s[i].bianhao,s[i].kecheng,s[i].leibie,&s[i].xueqi,&s[i].xuefen);
        fread(&(s[i]),sizeof(student),1,kcxx);
        i++;
    }
}
void scanf_3(xinxi a[])//�ѳɼ���Ϣ���ļ���ȡ����
{
    int i=1;
    while(!feof(cjxx))//�ж��ļ��Ƿ����
    {
        fread(&(a[i]),sizeof(xinxi),1,cjxx);
        i++;
    }
}
void scanf_4(student s[])//��Ʒ�гɼ����ļ���ȡ����
{
    int i=1;
    while(!feof(pxcj))//�ж��ļ��Ƿ����
    {
        fread(&(s[i]),sizeof(student),1,pxcj);
        i++;
    }
}

void fprintf_1(student s[])//�ѻ�����Ϣ�����ļ���
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

    fclose(jbxx);//�رո��ļ�
}
void fprintf_2(student s[])//�ѿγ���Ϣ�浽�ļ���ȥ
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

    fclose(kcxx);//�رո��ļ�
}
void fprintf_3(xinxi a[])//�ѳɼ���Ϣ�浽�ļ���ȥ
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

    fclose(cjxx);//�رո��ļ�
}
void fprintf_4(student s[])//��Ʒ�гɼ��浽�ļ���ȥ
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
    fclose(pxcj);//�رո��ļ�
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
