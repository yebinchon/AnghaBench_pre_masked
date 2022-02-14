
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum action { ____Placeholder_action } action ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(enum action VAR_10) {


        if (!VAR_7 && !VAR_6)
                (void) FUNC_4();


        if (!VAR_6)
                (void) FUNC_2(VAR_0);

        switch (VAR_10) {

        case 131:
                if (!VAR_8)
                        FUNC_1("Halting.");
                if (VAR_6)
                        return 0;
                (void) FUNC_2(VAR_1);
                return -VAR_9;

        case 129:
                if (!VAR_8)
                        FUNC_1("Powering off.");
                if (VAR_6)
                        return 0;
                (void) FUNC_2(VAR_2);
                return -VAR_9;

        case 130:
        case 128:
                return FUNC_3(VAR_4 |
                                             (VAR_8 ? 0 : VAR_5) |
                                             (VAR_6 ? VAR_3 : 0));

        default:
                FUNC_0("Unknown action.");
        }
}
