
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ answer; } ;
typedef TYPE_1__ Uploader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,size_t,int,char*) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char*,size_t) ;

__attribute__((used)) static size_t FUNC_4(char *VAR_0,
                              size_t VAR_1,
                              size_t VAR_2,
                              void *VAR_3) {
        Uploader *VAR_4 = VAR_3;

        FUNC_0(VAR_4);

        FUNC_1("The server answers (%zu bytes): %.*s",
                  VAR_1*VAR_2, (int)(VAR_1*VAR_2), VAR_0);

        if (VAR_2 && !VAR_4->answer) {
                VAR_4->answer = FUNC_3(VAR_0, VAR_1*VAR_2);
                if (!VAR_4->answer)
                        FUNC_2("Failed to store server answer (%zu bytes): out of memory", VAR_1*VAR_2);
        }

        return VAR_1 * VAR_2;
}
