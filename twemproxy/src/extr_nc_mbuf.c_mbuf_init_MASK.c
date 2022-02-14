
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instance {scalar_t__ mbuf_chunk_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_2(struct instance *VAR_6)
{
    VAR_5 = 0;
    FUNC_0(&VAR_2);

    VAR_3 = VAR_6->mbuf_chunk_size;
    VAR_4 = VAR_3 - VAR_1;

    FUNC_1(VAR_0, "mbuf hsize %d chunk size %zu offset %zu length %zu",
              VAR_1, VAR_3, VAR_4, VAR_4);
}
