
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_queue_item {int file; } ;


 int FUNC_0 (int ) ;
 struct write_queue_item* FUNC_1 (struct write_queue_item*) ;

__attribute__((used)) static struct write_queue_item* FUNC_2(struct write_queue_item *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->file);
        return FUNC_1(VAR_0);
}
