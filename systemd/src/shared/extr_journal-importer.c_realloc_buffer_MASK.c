
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int iovw; int size; } ;
typedef TYPE_1__ JournalImporter ;


 char* FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static char* FUNC_2(JournalImporter *VAR_0, size_t VAR_1) {
        char *VAR_2, *VAR_3 = VAR_0->buf;

        VAR_2 = FUNC_0(VAR_0->buf, VAR_0->size, VAR_1);
        if (!VAR_2)
                return ((void*)0);

        FUNC_1(&VAR_0->iovw, VAR_3, VAR_0->buf);

        return VAR_2;
}
