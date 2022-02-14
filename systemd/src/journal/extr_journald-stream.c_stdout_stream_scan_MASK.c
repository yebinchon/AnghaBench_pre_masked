
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* buffer; size_t length; TYPE_1__* server; } ;
struct TYPE_6__ {size_t line_max; } ;
typedef TYPE_2__ StdoutStream ;
typedef int LineBreak ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (char*,char,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_4(StdoutStream *VAR_4, bool VAR_5) {
        char *VAR_6;
        size_t VAR_7;
        int VAR_8;

        FUNC_0(VAR_4);

        VAR_6 = VAR_4->buffer;
        VAR_7 = VAR_4->length;



        for (;;) {
                LineBreak VAR_9;
                size_t VAR_10;
                char *VAR_11, *VAR_12;

                VAR_11 = FUNC_1(VAR_6, '\n', VAR_7);
                VAR_12 = FUNC_1(VAR_6, 0, VAR_11 ? (size_t) (VAR_11 - VAR_6) : VAR_7);

                if (VAR_12) {

                        VAR_10 = VAR_12 - VAR_6 + 1;
                        VAR_9 = VAR_3;
                } else if (VAR_11) {

                        *VAR_11 = 0;
                        VAR_10 = VAR_11 - VAR_6 + 1;
                        VAR_9 = VAR_2;
                } else if (VAR_7 >= VAR_4->server->line_max) {

                        *(VAR_6 + VAR_4->server->line_max) = 0;
                        VAR_10 = VAR_7;
                        VAR_9 = VAR_1;
                } else
                        break;

                VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_9);
                if (VAR_8 < 0)
                        return VAR_8;

                VAR_7 -= VAR_10;
                VAR_6 += VAR_10;
        }

        if (VAR_5 && VAR_7 > 0) {
                VAR_6[VAR_7] = 0;
                VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_0);
                if (VAR_8 < 0)
                        return VAR_8;

                VAR_6 += VAR_7;
                VAR_7 = 0;
        }

        if (VAR_6 > VAR_4->buffer) {
                FUNC_2(VAR_4->buffer, VAR_6, VAR_7);
                VAR_4->length = VAR_7;
        }

        return 0;
}
