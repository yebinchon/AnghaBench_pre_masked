
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ io_child_type; scalar_t__ io_orig_stage; int io_flags; int io_orig_flags; scalar_t__ io_stage; int io_queued_timestamp; int io_lock; int ** io_children; int io_bp; scalar_t__* io_child_error; scalar_t__* io_state; scalar_t__ io_error; scalar_t__ io_pipeline_trace; scalar_t__ io_reexecute; int io_orig_pipeline; int io_pipeline; int * io_gang_tree; int * io_gang_leader; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_link_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int **) ;

__attribute__((used)) static void
FUNC_8(zio_t *VAR_6)
{
 zio_t *VAR_7, *VAR_8;

 FUNC_0(VAR_6->io_child_type == VAR_0);
 FUNC_0(VAR_6->io_orig_stage == VAR_4);
 FUNC_0(VAR_6->io_gang_leader == ((void*)0));
 FUNC_0(VAR_6->io_gang_tree == ((void*)0));

 VAR_6->io_flags = VAR_6->io_orig_flags;
 VAR_6->io_stage = VAR_6->io_orig_stage;
 VAR_6->io_pipeline = VAR_6->io_orig_pipeline;
 VAR_6->io_reexecute = 0;
 VAR_6->io_flags |= VAR_3;
 VAR_6->io_pipeline_trace = 0;
 VAR_6->io_error = 0;
 for (int VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_6->io_state[VAR_9] = 0;
 for (int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_6->io_child_error[VAR_10] = 0;

 if (FUNC_2(VAR_6))
  FUNC_1(VAR_6->io_bp);
 zio_link_t *VAR_11 = ((void*)0);
 FUNC_5(&VAR_6->io_lock);
 for (VAR_7 = FUNC_7(VAR_6, &VAR_11); VAR_7 != ((void*)0); VAR_7 = VAR_8) {
  VAR_8 = FUNC_7(VAR_6, &VAR_11);
  for (int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
   VAR_6->io_children[VAR_7->io_child_type][VAR_12]++;
  FUNC_6(&VAR_6->io_lock);
  FUNC_8(VAR_7);
  FUNC_5(&VAR_6->io_lock);
 }
 FUNC_6(&VAR_6->io_lock);






 if (!(VAR_6->io_flags & VAR_2)) {
  VAR_6->io_queued_timestamp = FUNC_4();
  FUNC_3(VAR_6);
 }
}
