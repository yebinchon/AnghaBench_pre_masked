
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {void* boldital_font; void* ital_font; void* bold_font; void* norm_font; int char_height; int char_ascent; int char_width; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

int
FUNC_9(char_u *VAR_2, int VAR_3)
{
    FUNC_8((char*)VAR_2);

    VAR_1.char_width = FUNC_5();
    VAR_1.char_height = FUNC_4();
    VAR_1.char_ascent = VAR_1.char_height;

    char_u VAR_4[100];

    VAR_1.norm_font = FUNC_3(VAR_2);

    FUNC_2(VAR_4, "bold ", 99);
    FUNC_1(VAR_4, VAR_2, 100);
    VAR_1.bold_font = FUNC_3(VAR_4);

    FUNC_2(VAR_4, "italic ", 99);
    FUNC_1(VAR_4, VAR_2, 100);
    VAR_1.ital_font = FUNC_3(VAR_4);

    FUNC_2(VAR_4, "bold italic ", 99);
    FUNC_1(VAR_4, VAR_2, 100);
    VAR_1.boldital_font = FUNC_3(VAR_4);

    int VAR_5,VAR_6;
    VAR_5 = FUNC_7();
    VAR_6 = FUNC_6();
    FUNC_0(VAR_5, VAR_6);

    return VAR_0;
}
