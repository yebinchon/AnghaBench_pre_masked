
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ st_size; } ;
struct TYPE_6__ {int written_uncompressed; unsigned int last_percent; int progress_ratelimit; TYPE_1__ st; } ;
typedef TYPE_2__ RawExport ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(RawExport *VAR_0) {
        unsigned VAR_1;
        FUNC_1(VAR_0);

        if (VAR_0->written_uncompressed >= (uint64_t) VAR_0->st.st_size)
                VAR_1 = 100;
        else
                VAR_1 = (unsigned) ((VAR_0->written_uncompressed * FUNC_0(100)) / (uint64_t) VAR_0->st.st_size);

        if (VAR_1 == VAR_0->last_percent)
                return;

        if (!FUNC_3(&VAR_0->progress_ratelimit))
                return;

        FUNC_4(0, "X_IMPORT_PROGRESS=%u", VAR_1);
        FUNC_2("Exported %u%%.", VAR_1);

        VAR_0->last_percent = VAR_1;
}
