
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hxxx_helper {int i_nal_length_size; } ;
typedef int block_t ;


 int * FUNC_0 (struct hxxx_helper*,int *,int*) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static block_t *
FUNC_2(struct hxxx_helper *VAR_0, block_t *VAR_1,
                                      bool *VAR_2)
{
    VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_2);
    return VAR_1 ? FUNC_1(VAR_1, VAR_0->i_nal_length_size) : ((void*)0);
}
