
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mainwin; } ;
struct TYPE_5__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef int GdkWindow ;
typedef int GdkPixmap ;
typedef int GdkCursor ;
typedef TYPE_1__ GdkColor ;


 int * FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int * FUNC_3 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static GdkCursor *
FUNC_4(void)
{
    GdkWindow *VAR_1 = ((void*)0);
    GdkPixmap *VAR_2;
    GdkCursor *VAR_3;
    GdkColor VAR_4 = { 0, 0, 0, 0 };
    char VAR_5[] = { 0x0 };







    VAR_2 = FUNC_0(VAR_1, VAR_5, 1, 1);
    VAR_3 = FUNC_2(VAR_2, VAR_2,
     &VAR_4, &VAR_4, 0, 0);
    FUNC_1(VAR_2);

    return VAR_3;
}
