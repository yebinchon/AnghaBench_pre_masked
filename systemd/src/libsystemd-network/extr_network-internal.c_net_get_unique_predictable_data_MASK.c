
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_id128_t ;
typedef int sd_device ;
struct TYPE_2__ {int bytes; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int,char const*,size_t) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int,size_t) ;
 int FUNC_8 (int *,char const**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,size_t,int ) ;
 size_t FUNC_11 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_12(sd_device *VAR_4, bool VAR_5, uint64_t *VAR_6) {
        size_t VAR_7, VAR_8 = 0;
        const char *VAR_9;
        int VAR_10;
        VAR_2 *VAR_3;

        FUNC_1(VAR_4);



        VAR_9 = FUNC_6(VAR_4);
        if (!VAR_9 && VAR_5)
                (void) FUNC_8(VAR_4, &VAR_9);
        if (!VAR_9)
                return FUNC_4(VAR_4, FUNC_0(VAR_0),
                                              "No stable identifying information found");

        FUNC_3(VAR_4, "Using \"%s\" as stable identifying information", VAR_9);
        VAR_7 = FUNC_11(VAR_9);
        VAR_8 = sizeof(sd_id128_t) + VAR_7;
        VAR_3 = FUNC_7(VAR_2, VAR_8);


        VAR_10 = FUNC_9((sd_id128_t*) VAR_3);
        if (VAR_10 < 0)
                 return VAR_10;
        FUNC_5(VAR_3 + sizeof(sd_id128_t), VAR_9, VAR_7);



        *VAR_6 = FUNC_2(FUNC_10(VAR_3, VAR_8, VAR_1.bytes));
        return 0;
}
