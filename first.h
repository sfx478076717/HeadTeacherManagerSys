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
    struct px term[T];//ѧ��
}student;

typedef struct//�γ���Ϣ�ṹ��
{
    int xuehao;
    struct cj
    {
        struct course
        {
            float score;
            char bianhao[10],kecheng[10],chongxiu[10],guake[10];
        };
        struct course kc[K];//�γ�
    };
    struct cj term[T];//ѧ��

}xinxi;

xinxi xin[N];
student stu[N];

void menu(student s[],xinxi a[]);//�˵�
void import(student s[],xinxi a[]);//����

void alter(student s[],xinxi a[]);//�޸�
void tongji(student s[],xinxi a[]);//ͳ��
void paixu(student s[],xinxi a[]);//����
void run_outport(student s[],xinxi a[]);//�鿴��Ϣ
void scholarship(student s[],xinxi a[]);//��ѧ������
void JC_import(student s[],int n);//����Ϣ¼�루�����̫������дһ��������
void CH_import(student s[],int n);//�ʹ���Ϣ¼�루�����̫������дһ��������

void file_a();//��ab+����ʽ���ļ�(�����ƴ򿪣�ֻ��)
//void file_w_1();//��wb+����ʽ���ļ�(�����ƴ򿪣�����գ��ɶ���д)
//void file_w_2();//��wb+����ʽ���ļ�(�����ƴ򿪣�����գ��ɶ���д)
//void file_w_3();//��wb+����ʽ���ļ�(�����ƴ򿪣�����գ��ɶ���д)
//void file_w_4();//��wb+����ʽ���ļ�(�����ƴ򿪣�����գ��ɶ���д)

void fprintf_1(student s[]);//�ѻ�����Ϣ�浽�ļ���ȥ
void fprintf_2(student s[]);//�ѿγ���Ϣ�浽�ļ���ȥ
void fprintf_3(xinxi a[]);//�ѳɼ���Ϣ�浽�ļ���ȥ
void fprintf_4(student s[]);//��Ʒ�гɼ��浽�ļ���ȥ
void fprintf_5(student s[]);//�ѽ�����Ϣ�浽�ļ���ȥ

//void scanf_1(student s[]);//�ѻ�����Ϣ���ļ���ȡ����
//void scanf_2(student s[]);//�ѿγ���Ϣ���ļ���ȡ����
//void scanf_3(xinxi a[]);//�ѳɼ���Ϣ���ļ���ȡ����
//void scanf_4(student s[]);//��Ʒ�гɼ����ļ���ȡ����
//void scanf_5(student s[]);//�ѽ�����Ϣ���ļ���ȡ����

void jb_outport(student s[]);//���������Ϣ
void kc_outport(student s[]);//����γ���Ϣ
void cj_outport(xinxi a[]);//����ɼ���Ϣ
void px_outport(student s[]);//���Ʒ�гɼ�

