
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t filled; size_t offset; size_t scanned; size_t size; char* buf; int iovw; } ;
typedef TYPE_1__ JournalImporter ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,size_t,size_t) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 char* FUNC_4 (char*,size_t) ;

void FUNC_5(JournalImporter *VAR_1) {
        size_t VAR_2, VAR_3;



        FUNC_0(&VAR_1->iovw, 0);


        VAR_2 = VAR_1->filled - VAR_1->offset;

        if (VAR_2 == 0)
                VAR_1->offset = VAR_1->scanned = VAR_1->filled = 0;
        else if (VAR_1->offset > VAR_1->size - VAR_1->filled &&
                 VAR_1->offset > VAR_2) {
                FUNC_3(VAR_1->buf, VAR_1->buf + VAR_1->offset, VAR_2);
                VAR_1->offset = VAR_1->scanned = 0;
                VAR_1->filled = VAR_2;
        }

        VAR_3 = VAR_1->size;
        while (VAR_3 > 16 * VAR_0 && VAR_1->filled < VAR_3 / 2)
                VAR_3 /= 2;
        if (VAR_3 < VAR_1->size) {
                char *VAR_4;

                VAR_4 = FUNC_4(VAR_1->buf, VAR_3);
                if (!VAR_4)
                        FUNC_2("Failed to reallocate buffer to (smaller) size %zu",
                                    VAR_3);
                else {
                        FUNC_1("Reallocated buffer from %zu to %zu bytes",
                                  VAR_1->size, VAR_3);
                        VAR_1->buf = VAR_4;
                        VAR_1->size = VAR_3;
                }
        }
}
