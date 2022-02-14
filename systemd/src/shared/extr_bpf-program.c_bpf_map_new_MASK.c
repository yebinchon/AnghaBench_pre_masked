
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_type; size_t key_size; size_t value_size; size_t max_entries; int map_flags; } ;
typedef int uint32_t ;
typedef enum bpf_map_type { ____Placeholder_bpf_map_type } bpf_map_type ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (int ,union bpf_attr*,int) ;
 int VAR_1 ;

int FUNC_1(enum bpf_map_type VAR_2, size_t VAR_3, size_t VAR_4, size_t VAR_5, uint32_t VAR_6) {
        union bpf_attr VAR_7 = {
                .map_type = VAR_2,
                .key_size = VAR_3,
                .value_size = VAR_4,
                .max_entries = VAR_5,
                .map_flags = VAR_6,
        };
        int VAR_8;

        VAR_8 = FUNC_0(VAR_0, &VAR_7, sizeof(VAR_7));
        if (VAR_8 < 0)
                return -VAR_1;

        return VAR_8;
}
