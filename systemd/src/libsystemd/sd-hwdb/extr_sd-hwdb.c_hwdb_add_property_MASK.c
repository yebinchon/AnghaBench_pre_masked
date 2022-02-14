
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct trie_value_entry_f {int key_off; } ;
struct trie_value_entry2_f {scalar_t__ file_priority; scalar_t__ filename_off; scalar_t__ line_number; } ;
struct TYPE_7__ {int properties_modified; int properties; TYPE_1__* head; } ;
typedef TYPE_2__ sd_hwdb ;
struct TYPE_6__ {int value_entry_size; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 struct trie_value_entry2_f* FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*,void*) ;
 int VAR_0 ;
 char* FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(sd_hwdb *VAR_1, const struct trie_value_entry_f *VAR_2) {
        const char *VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);

        VAR_3 = FUNC_5(VAR_1, VAR_2->key_off);





        if (VAR_3[0] != ' ')
                return 0;

        VAR_3++;

        if (FUNC_1(VAR_1->head->value_entry_size) >= sizeof(struct trie_value_entry2_f)) {
                const struct trie_value_entry2_f *VAR_5, *VAR_6;

                VAR_6 = (const struct trie_value_entry2_f *)VAR_2;
                VAR_5 = FUNC_3(VAR_1->properties, VAR_3);
                if (VAR_5) {
                        bool VAR_7;

                        if (VAR_6->file_priority == 0)
                                VAR_7 = VAR_6->filename_off < VAR_5->filename_off ||
                                        (VAR_6->filename_off == VAR_5->filename_off && VAR_6->line_number < VAR_5->line_number);
                        else
                                VAR_7 = VAR_6->file_priority < VAR_5->file_priority ||
                                        (VAR_6->file_priority == VAR_5->file_priority && VAR_6->line_number < VAR_5->line_number);
                        if (VAR_7)
                                return 0;
                }
        }

        VAR_4 = FUNC_2(&VAR_1->properties, &VAR_0);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_4(VAR_1->properties, VAR_3, (void *)VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_1->properties_modified = 1;

        return 0;
}
