
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int Ptr ;
typedef scalar_t__ OSErr ;
typedef int FSSpec ;
typedef int DescType ;
typedef int AEKeyword ;
typedef int AEDesc ;


 scalar_t__ FUNC_0 (int *,long*) ;
 scalar_t__ FUNC_1 (int *,long,int ,int *,int *,int ,int,long*) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (long) ;
 int VAR_0 ;

char_u **
FUNC_4(AEDesc *VAR_1, long *VAR_2, OSErr *VAR_3)
{
    char_u **VAR_4 = ((void*)0);
    OSErr VAR_5;
    long VAR_6;
    FSSpec VAR_7;
    long VAR_8;
    AEKeyword VAR_9;
    DescType VAR_10;


    *VAR_3 = FUNC_0(VAR_1, VAR_2);
    if (*VAR_3)
 return VAR_4;


    VAR_4 = (char_u **) FUNC_3(*VAR_2 * sizeof(char_u *));


    for (VAR_6 = 0; VAR_6 < *VAR_2; VAR_6++)
 VAR_4[VAR_6] = ((void*)0);


    for (VAR_6 = 1; VAR_6 <= *VAR_2; VAR_6++)
    {

 VAR_5 = FUNC_1(VAR_1, VAR_6, VAR_0,
    &VAR_9, &VAR_10,
    (Ptr) &VAR_7, sizeof(FSSpec), &VAR_8);
 if (VAR_5)
 {


     return VAR_4;
 }


 VAR_4[VAR_6 - 1] = FUNC_2(VAR_7);
    }

    return (VAR_4);
}
