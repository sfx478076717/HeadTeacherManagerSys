#include"stdio.h"
#include"stdlib.h"
#include<conio.h>
#include"string.h"

#define N 32
#define T 2
#define K 10
FILE *jbxx,*kcxx,*cjxx,*pxcj,*jcxx;

typedef struct
{
    int xuehao,age,num,xueqi;
    float xuefen;
    char name[10],sex[10],bianhao[20],kecheng[20],leibie[20];
    struct px
    {
        int FDY_pf,BZR_pf;
        float BJ_pf;
    };
    char HJ_lb[100],HJ_time[20],CH_lb[100],CH_time[20];
    int HJ_score,CH_score;
    struct px term[T];//学期
}student;

typedef struct//课程信息结构体
{
    int xuehao;
    struct cj
    {
        struct course
        {
            float score;
            char bianhao[10],kecheng[10],chongxiu[10],guake[10];
        };
        struct course kc[K];//课程
    };
    struct cj term[T];//学期

}xinxi;

xinxi xin[N];
student stu[N];

void menu(student s[],xinxi a[]);//菜单
void import(student s[],xinxi a[]);//输入

void alter(student s[],xinxi a[]);//修改
void tongji(student s[],xinxi a[]);//统计
void paixu(student s[],xinxi a[]);//排序
void run_outport(student s[],xinxi a[]);//查看信息
void scholarship(student s[],xinxi a[]);//奖学金评定
void JC_import(student s[],int n);//获奖信息录入（因程序太多特意写一个函数）
void CH_import(student s[],int n);//惩处信息录入（因程序太多特意写一个函数）

void file_a();//以ab+的形式打开文件(二进制打开，只读)
//void file_w_1();//以wb+的形式打开文件(二进制打开，先清空，可读可写)
//void file_w_2();//以wb+的形式打开文件(二进制打开，先清空，可读可写)
//void file_w_3();//以wb+的形式打开文件(二进制打开，先清空，可读可写)
//void file_w_4();//以wb+的形式打开文件(二进制打开，先清空，可读可写)

void fprintf_1(student s[]);//把基本信息存到文件中去
void fprintf_2(student s[]);//把课程信息存到文件中去
void fprintf_3(xinxi a[]);//把成绩信息存到文件中去
void fprintf_4(student s[]);//把品行成绩存到文件中去
void fprintf_5(student s[]);//把奖惩信息存到文件中去

//void scanf_1(student s[]);//把基本信息从文件中取出来
//void scanf_2(student s[]);//把课程信息从文件中取出来
//void scanf_3(xinxi a[]);//把成绩信息从文件中取出来
//void scanf_4(student s[]);//把品行成绩从文件中取出来
//void scanf_5(student s[]);//把奖惩信息从文件中取出来

void jb_outport(student s[]);//输出基本信息
void kc_outport(student s[]);//输出课程信息
void cj_outport(xinxi a[]);//输出成绩信息
void px_outport(student s[]);//输出品行成绩

