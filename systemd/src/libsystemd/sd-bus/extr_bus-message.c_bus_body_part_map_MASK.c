
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bus_body_part {int size; scalar_t__ memfd; size_t memfd_offset; size_t mapped; int munmap_this; int * data; void* mmap_begin; scalar_t__ is_zero; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t) ;
 int VAR_4 ;
 int FUNC_1 (struct bus_body_part*) ;
 int VAR_5 ;
 void* FUNC_2 (int *,size_t,int ,int,int,size_t) ;
 size_t FUNC_3 () ;

int FUNC_4(struct bus_body_part *VAR_6) {
        void *VAR_7;
        size_t VAR_8, VAR_9;

        FUNC_1(VAR_6);

        if (VAR_6->data)
                return 0;

        if (VAR_6->size <= 0)
                return 0;


        if (VAR_6->memfd < 0 && VAR_6->is_zero && VAR_6->size < 8) {
                static const uint8_t VAR_10[7] = { };
                VAR_6->data = (void*) VAR_10;
                return 0;
        }

        VAR_9 = VAR_6->memfd_offset - ((VAR_6->memfd_offset / FUNC_3()) * FUNC_3());
        VAR_8 = FUNC_0(VAR_6->size + VAR_9);

        if (VAR_6->memfd >= 0)
                VAR_7 = FUNC_2(((void*)0), VAR_8, VAR_4, VAR_3, VAR_6->memfd, VAR_6->memfd_offset - VAR_9);
        else if (VAR_6->is_zero)
                VAR_7 = FUNC_2(((void*)0), VAR_8, VAR_4, VAR_3|VAR_1, -1, 0);
        else
                return -VAR_0;

        if (VAR_7 == VAR_2)
                return -VAR_5;

        VAR_6->mapped = VAR_8;
        VAR_6->mmap_begin = VAR_7;
        VAR_6->data = (uint8_t*) VAR_7 + VAR_9;
        VAR_6->munmap_this = 1;

        return 0;
}
