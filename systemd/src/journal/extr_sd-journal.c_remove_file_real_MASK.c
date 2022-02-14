
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int unique_file_lost; int fields_file_lost; int current_invalidate_counter; struct TYPE_7__* fields_file; scalar_t__ fields_offset; int path; int files; struct TYPE_7__* unique_file; scalar_t__ unique_offset; scalar_t__ current_field; struct TYPE_7__* current_file; } ;
typedef TYPE_1__ sd_journal ;
typedef TYPE_1__ JournalFile ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(sd_journal *VAR_0, JournalFile *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        (void) FUNC_4(VAR_0->files, VAR_1->path);

        FUNC_2("File %s removed.", VAR_1->path);

        if (VAR_0->current_file == VAR_1) {
                VAR_0->current_file = ((void*)0);
                VAR_0->current_field = 0;
        }

        if (VAR_0->unique_file == VAR_1) {

                VAR_0->unique_file = FUNC_3(VAR_0->files, VAR_0->unique_file->path);
                VAR_0->unique_offset = 0;
                if (!VAR_0->unique_file)
                        VAR_0->unique_file_lost = 1;
        }

        if (VAR_0->fields_file == VAR_1) {
                VAR_0->fields_file = FUNC_3(VAR_0->files, VAR_0->fields_file->path);
                VAR_0->fields_offset = 0;
                if (!VAR_0->fields_file)
                        VAR_0->fields_file_lost = 1;
        }

        (void) FUNC_1(VAR_1);

        VAR_0->current_invalidate_counter++;
}
