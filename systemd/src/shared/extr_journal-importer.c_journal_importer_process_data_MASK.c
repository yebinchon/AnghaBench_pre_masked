
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int state; size_t data_size; size_t field_len; int iovw; } ;
typedef TYPE_1__ JournalImporter ;





 void* VAR_0 ;

 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (TYPE_1__*,void**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char**,size_t*) ;
 int FUNC_7 (int *,char*,size_t) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (char*,char,size_t) ;
 int FUNC_12 (char*,char*,size_t) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 char* FUNC_14 (char*,int) ;

int FUNC_15(JournalImporter *VAR_1) {
        int VAR_2;

        switch(VAR_1->state) {
        case 128: {
                char *VAR_3, *VAR_4;
                size_t VAR_5 = 0;

                FUNC_0(VAR_1->data_size == 0);

                VAR_2 = FUNC_6(VAR_1, &VAR_3, &VAR_5);
                if (VAR_2 < 0)
                        return VAR_2;
                if (VAR_2 == 0) {
                        VAR_1->state = VAR_0;
                        return 0;
                }
                FUNC_0(VAR_5 > 0);
                FUNC_0(VAR_3[VAR_5-1] == '\n');

                if (VAR_5 == 1) {
                        FUNC_10("Received empty line, event is ready");
                        return 1;
                }






                VAR_4 = FUNC_11(VAR_3, '=', VAR_5);
                if (VAR_4) {

                        VAR_5--;

                        if (!FUNC_8(VAR_3, VAR_4 - VAR_3, 1)) {
                                char VAR_6[64], *VAR_7;

                                VAR_7 = FUNC_14(VAR_3, VAR_4 - VAR_3);
                                FUNC_9("Ignoring invalid field: \"%s\"",
                                          FUNC_2(VAR_6, sizeof VAR_6, VAR_7));

                                return 0;
                        }

                        VAR_3[VAR_5] = '\0';
                        VAR_2 = FUNC_13(VAR_1, VAR_3);
                        if (VAR_2 != 0)
                                return VAR_2 < 0 ? VAR_2 : 0;

                        VAR_2 = FUNC_7(&VAR_1->iovw, VAR_3, VAR_5);
                        if (VAR_2 < 0)
                                return VAR_2;
                } else {

                        VAR_3[VAR_5-1] = '=';

                        VAR_1->field_len = VAR_5;
                        VAR_1->state = 129;


                }

                FUNC_10("Received: %.*s (%s)", (int) VAR_5, VAR_3, VAR_4 ? "text" : "binary");

                return 0;
        }

        case 129:
                FUNC_0(VAR_1->data_size == 0);

                VAR_2 = FUNC_5(VAR_1);

                if (VAR_2 < 0)
                        return VAR_2;
                if (VAR_2 == 0) {
                        VAR_1->state = VAR_0;
                        return 0;
                }

                VAR_1->state = VAR_1->data_size > 0 ?
                        131 : 130;

                return 0;

        case 131: {
                void *VAR_8;
                char *VAR_9;

                FUNC_0(VAR_1->data_size > 0);

                VAR_2 = FUNC_3(VAR_1, &VAR_8);

                if (VAR_2 < 0)
                        return VAR_2;
                if (VAR_2 == 0) {
                        VAR_1->state = VAR_0;
                        return 0;
                }

                FUNC_0(VAR_8);

                VAR_9 = (char*) VAR_8 - sizeof(uint64_t) - VAR_1->field_len;
                FUNC_12(VAR_9 + sizeof(uint64_t), VAR_9, VAR_1->field_len);

                VAR_2 = FUNC_7(&VAR_1->iovw, VAR_9 + sizeof(uint64_t), VAR_1->field_len + VAR_1->data_size);
                if (VAR_2 < 0)
                        return VAR_2;

                VAR_1->state = 130;

                return 0;
        }

        case 130:
                VAR_2 = FUNC_4(VAR_1);

                if (VAR_2 < 0)
                        return VAR_2;
                if (VAR_2 == 0) {
                        VAR_1->state = VAR_0;
                        return 0;
                }

                VAR_1->data_size = 0;
                VAR_1->state = 128;

                return 0;
        default:
                FUNC_1("wtf?");
        }
}
