void JC_import(student s[],int n)//获奖信息
{
    system("cls");
for(int i=1;i<=n;i++)
{
    printf("请输入第%d位学生的学号：(录入获奖信息)\n",i);
    scanf("%d",&s[i].xuehao);
    printf("请选择：\n");
    printf("——1、奖学金——\n");
    printf("——2、荣誉积分——\n");
    printf("——3、学科竞赛——\n");
    printf("请输入：");
    int f;
    scanf("%d",&f);
    system("cls");
    switch(f)
    {
        case 1:
        {
            printf("————奖学金————\n");
            printf("——1、单项奖学金——\n");
            printf("——2、三等奖学金——\n");
            printf("——3、二等奖学金——\n");
            printf("——4、一等奖学金——\n");
            printf("——5、特等奖学金——\n");
            printf("——6、校长奖学金——\n");
            printf("——0、未获得————\n");
            printf("请输入：");
            int f1;
            scanf("%d",&f1);
                switch(f1)
                {
                case 1:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "单项奖学金");
                        s[i].HJ_score=1;
                    }break;
                case 2:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "三等奖学金");
                        s[i].HJ_score=2;
                    }break;
                case 3:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "二等奖学金");
                        s[i].HJ_score=3;
                    }break;
                case 4:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "一等奖学金");
                        s[i].HJ_score=4;
                    }break;
                case 5:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "特等奖学金");
                        s[i].HJ_score=5;
                    }break;
                case 6:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "校长奖学金");
                        s[i].HJ_score=6;
                    }break;
                default:break;
                }
                }break;
        case 2:
        {
            printf("————荣誉积分————\n");
            printf("——1、校级优秀个人——\n");
            printf("——2、省级优秀个人——\n");
            printf("——3、国家级优秀个人——\n");
            printf("——0、未获得————\n");
            printf("请输入：");
            int f2;
            scanf("%d",&f2);
            switch(f2)
            {
                case 1:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "校级优秀个人");
                        s[i].HJ_score=3;
                    }break;
                case 2:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "省级优秀个人");
                        s[i].HJ_score=6;
                    }break;
                case 3:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "国家级优秀个人");
                        s[i].HJ_score=12;
                    }break;
                default:break;
                }
                }break;
        case 3:
        {
            printf("————学科竞赛————\n");
            printf("——1、省级以上学科竞赛成功参赛奖——\n");
            printf("——2、省级三等奖——\n");
            printf("——3、省级二等奖——\n");
            printf("——4、省级一等奖——\n");
            printf("——5、国家级三等奖——\n");
            printf("——6、国家级二等奖——\n");
            printf("——7、国家级一等奖——\n");
            printf("——8、校级三等奖——\n");
            printf("——9、校级二等奖——\n");
            printf("——10、校级一等奖——\n");
            printf("——0、未获得————\n");
            printf("请输入：");
            int f3;
            scanf("%d",&f3);
                switch(f3)
                {
                case 1:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "省级以上学科竞赛成功参赛奖");
                        s[i].HJ_score=1;
                    }break;
                case 2:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "省级三等奖");
                        s[i].HJ_score=4;
                    }break;
                case 3:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "省级二等奖");
                        s[i].HJ_score=5;
                    }break;
                case 4:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "省级一等奖");
                        s[i].HJ_score=6;
                    }break;
                case 5:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "国家级三等奖");
                        s[i].HJ_score=6;
                    }break;
                case 6:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "国家级二等奖");
                        s[i].HJ_score=9;
                    }break;
                case 7:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "国家级一等奖");
                        s[i].HJ_score=12;
                    }break;
                case 8:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "校级三等奖");
                        s[i].HJ_score=1;
                    }break;
                case 9:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "校级二等奖");
                        s[i].HJ_score=2;
                    }break;
                case 10:
                    {
                        printf("请输入获奖时间：");
                        scanf("%s",s[i].HJ_time);
                        strcpy(s[i].HJ_lb, "校级一等奖");
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
    printf("请输入第%d位学生的学号：(录入惩处信息)\n",i);
    scanf("%d",&s[i].xuehao);
    printf("请问受到过什么惩罚？\n");
    printf("1、通报批评\n");
    printf("2、校级警告\n");
    printf("3、严重警告\n");
    printf("4、记过\n");
    printf("5、记大过\n");
    printf("6、开除学籍\n");
    printf("0、无惩罚\n");
    scanf("%d",&f4);
    system("cls");
        switch(f4)
            {
                case 1:
                    {
                        printf("请输入惩处时间：\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "通报批评");
                        s[i].CH_score=-1;
                    }break;
                case 2:
                    {
                        printf("请输入惩处时间：\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "通报批评");
                        s[i].CH_score=-2;
                    }break;
                case 3:
                    {
                        printf("请输入惩处时间：\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "通报批评");
                        s[i].CH_score=-3;
                    }break;
                case 4:
                    {
                        printf("请输入惩处时间：\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "通报批评");
                        s[i].CH_score=-4;
                    }break;
                case 5:
                    {
                        printf("请输入惩处时间：\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "通报批评");
                        s[i].CH_score=-5;
                    }break;
                case 6:
                    {
                        printf("请输入惩处时间：\n");
                        scanf("%s",s[i].CH_time);
                        strcpy(s[i].CH_lb, "通报批评");
                        s[i].CH_score=-6;
                    }break;
                default:
                    strcpy(s[i].CH_lb,"无惩罚");
                    break;
            }
}
}
