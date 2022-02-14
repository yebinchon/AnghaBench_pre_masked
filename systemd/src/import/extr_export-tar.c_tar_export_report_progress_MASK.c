
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int quota_referenced; int written_uncompressed; unsigned int last_percent; int progress_ratelimit; } ;
typedef TYPE_1__ TarExport ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(TarExport *VAR_0) {
        unsigned VAR_1;
        FUNC_1(VAR_0);


        if (VAR_0->quota_referenced == (uint64_t) -1)
                return;

        if (VAR_0->written_uncompressed >= VAR_0->quota_referenced)
                VAR_1 = 100;
        else
                VAR_1 = (unsigned) ((VAR_0->written_uncompressed * FUNC_0(100)) / VAR_0->quota_referenced);

        if (VAR_1 == VAR_0->last_percent)
                return;

        if (!FUNC_3(&VAR_0->progress_ratelimit))
                return;

        FUNC_4(0, "X_IMPORT_PROGRESS=%u", VAR_1);
        FUNC_2("Exported %u%%.", VAR_1);

        VAR_0->last_percent = VAR_1;
}
