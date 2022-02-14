
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSStatus ;
typedef int AudioUnit ;
typedef int AUNode ;
typedef int AUGraph ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static OSStatus FUNC_6(AUGraph *VAR_8, AudioUnit *VAR_9, AudioUnit *VAR_10)
{
    OSStatus VAR_11;


    AUNode VAR_12, VAR_13, VAR_14;


    FUNC_5(VAR_11 = FUNC_4(VAR_8), VAR_0);
    FUNC_5(VAR_11 = FUNC_3(*VAR_8,
                                     VAR_6,
                                     VAR_1,
                                     &VAR_12), VAR_0);



    FUNC_5(VAR_11 = FUNC_3(*VAR_8,
                                     VAR_5,
                                     VAR_4,
                                     &VAR_13), VAR_0);


    FUNC_5(VAR_11 = FUNC_3(*VAR_8,
                                     VAR_7,
                                     VAR_2,
                                     &VAR_14), VAR_0);



    FUNC_5(VAR_11 = FUNC_2(*VAR_8), VAR_0);


    FUNC_5(VAR_11 = FUNC_0(*VAR_8, VAR_12, 0, VAR_13, 0), VAR_0);

    FUNC_5(VAR_11 = FUNC_0(*VAR_8, VAR_13, 0, VAR_14, 0), VAR_0);


    FUNC_5(VAR_11 = FUNC_1(*VAR_8, VAR_12, 0, VAR_9), VAR_0);

    FUNC_5(VAR_11 = FUNC_1(*VAR_8, VAR_14, 0, VAR_10), VAR_0);

bailout:
    return VAR_11;
}
