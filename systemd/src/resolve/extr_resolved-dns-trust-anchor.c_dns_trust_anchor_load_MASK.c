
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DnsTrustAnchor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int,char*) ;

int FUNC_6(DnsTrustAnchor *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);


        (void) FUNC_4(VAR_2, ".positive", VAR_1);
        (void) FUNC_4(VAR_2, ".negative", VAR_0);


        VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 < 0)
                return FUNC_5(VAR_3, "Failed to add built-in positive trust anchor: %m");

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 < 0)
                return FUNC_5(VAR_3, "Failed to add built-in negative trust anchor: %m");

        FUNC_3(VAR_2);

        return 0;
}
