
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ code; int name; } ;
typedef TYPE_1__ sd_bus_error_map ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ const* VAR_3 ;
 TYPE_1__ const* VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_6) {
        const sd_bus_error_map **VAR_7, *VAR_8;
        const char *VAR_9;
        int VAR_10;

        if (!VAR_6)
                return VAR_1;

        VAR_9 = FUNC_2(VAR_6, "System.Error.");
        if (VAR_9) {
                VAR_10 = FUNC_1(VAR_9);
                if (VAR_10 < 0)
                        return VAR_2;

                return VAR_10;
        }

        if (VAR_5)
                for (VAR_7 = VAR_5; *VAR_7; VAR_7++)
                        for (VAR_8 = *VAR_7;; VAR_8++) {

                                if (VAR_8->code == VAR_0)
                                        break;

                                if (FUNC_3(VAR_8->name, VAR_6))
                                        return VAR_8->code;
                        }

        VAR_8 = FUNC_0(VAR_3, sizeof(void*));
        while (VAR_8 < VAR_4) {






                if (VAR_8->code == VAR_0) {
                        VAR_8 = FUNC_0(VAR_8 + 1, sizeof(void*));
                        continue;
                }

                if (FUNC_3(VAR_8->name, VAR_6))
                        return VAR_8->code;

                VAR_8++;
        }

        return VAR_2;
}
