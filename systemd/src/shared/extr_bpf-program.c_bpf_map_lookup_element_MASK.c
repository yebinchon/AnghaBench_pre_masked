
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_fd; int value; int key; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,union bpf_attr*,int) ;
 int VAR_1 ;

int FUNC_2(int VAR_2, const void *VAR_3, void *VAR_4) {

        union bpf_attr VAR_5 = {
                .map_fd = VAR_2,
                .key = FUNC_0(VAR_3),
                .value = FUNC_0(VAR_4),
        };

        if (FUNC_1(VAR_0, &VAR_5, sizeof(VAR_5)) < 0)
                return -VAR_1;

        return 0;
}
