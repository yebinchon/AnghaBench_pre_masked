
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int missedKeyword ;
typedef int Ptr ;
typedef scalar_t__ OSErr ;
typedef int DescType ;
typedef int AppleEvent ;
typedef int AEKeyword ;


 scalar_t__ FUNC_0 (int const*,int ,int ,int *,int ,int,long*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

OSErr
FUNC_1(const AppleEvent *VAR_5)
{
    OSErr VAR_6;
    long VAR_7;
    DescType VAR_8;
    AEKeyword VAR_9;


    VAR_6 = FUNC_0(VAR_5, VAR_2,
         VAR_4, &VAR_8,
         (Ptr)&VAR_9, sizeof(VAR_9),
         &VAR_7);


    if (VAR_6 == VAR_0)
    {
 VAR_6 = VAR_3;
    }
    else
    {




    }

    return VAR_6;
}
