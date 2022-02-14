
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fd; int iovw; scalar_t__ buf; scalar_t__ name; int passive_fd; } ;
typedef TYPE_1__ JournalImporter ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(JournalImporter *VAR_0) {
        if (VAR_0->fd >= 0 && !VAR_0->passive_fd) {
                FUNC_2("Closing %s (fd=%d)", VAR_0->name ?: "importer", VAR_0->fd);
                FUNC_3(VAR_0->fd);
        }

        FUNC_0(VAR_0->name);
        FUNC_0(VAR_0->buf);
        FUNC_1(&VAR_0->iovw, 0);
}
