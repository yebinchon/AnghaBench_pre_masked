
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int_u ;
typedef char char_u ;
struct TYPE_12__ {char* norm_font; char* bold_font; char* ital_font; int char_ascent; scalar_t__ char_height; scalar_t__ char_width; int vimWindow; } ;
struct TYPE_11__ {int font; } ;
struct TYPE_9__ {int y; scalar_t__ x; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_10__ {TYPE_2__ ul; TYPE_1__ lr; } ;
typedef TYPE_3__ PhRect_t ;
typedef TYPE_4__ FontQueryInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int *,char*,char*,int) ;
 int FUNC_1 (char*,TYPE_4__*) ;
 char* FUNC_2 (int ,int *,int *,char*,int,int ,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 TYPE_5__ VAR_6 ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char*,int,int,int) ;
 scalar_t__ FUNC_6 (char*,char**,int*,int*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int ) ;

int
FUNC_9(char_u *VAR_7, int VAR_8)
{
    char_u *VAR_9;
    char_u *VAR_10 = ((void*)0);
    int_u VAR_11 = 0;
    int_u VAR_12 = 12;

    FontQueryInfo VAR_13;
    PhRect_t VAR_14;

    if (VAR_7 == ((void*)0))
    {

 VAR_7 = "PC Terminal";
    }

    if (FUNC_3(VAR_7, "*") == 0)
    {
 VAR_9 = FUNC_2(VAR_6.vimWindow, ((void*)0), ((void*)0),
  "pcterm12", -1, VAR_5, ((void*)0));

 if (VAR_9 == ((void*)0))
     return VAR_0;

 FUNC_4(VAR_6.norm_font);
 VAR_6.norm_font = VAR_9;

 FUNC_1(VAR_9, &VAR_13);
 VAR_10 = FUNC_8(VAR_13.font);
    }
    else
    {
 if (FUNC_6(VAR_7, &VAR_10, &VAR_11,
      &VAR_12) == VAR_1)
     return VAR_0;

 VAR_9 = FUNC_5(VAR_10, VAR_11, VAR_12, 0);
 if (VAR_9 == ((void*)0))
 {
     FUNC_7(VAR_10);
     return VAR_0;
 }

 FUNC_4(VAR_6.norm_font);
 VAR_6.norm_font = VAR_9;
    }

    FUNC_4(VAR_6.bold_font);
    VAR_6.bold_font = FUNC_5(VAR_10, VAR_11 | VAR_3,
     VAR_12, VAR_3);

    FUNC_4(VAR_6.ital_font);
    VAR_6.ital_font = FUNC_5(VAR_10, VAR_11 | VAR_4,
     VAR_12, VAR_4);


    FUNC_0(&VAR_14, ((void*)0), VAR_9, "g", 1);

    VAR_6.char_width = VAR_14.lr.x - VAR_14.ul.x + 1;
    VAR_6.char_height = (- VAR_14.ul.y) + VAR_14.lr.y + 1;
    VAR_6.char_ascent = - VAR_14.ul.y;

    FUNC_7(VAR_10);
    return VAR_2;
}
