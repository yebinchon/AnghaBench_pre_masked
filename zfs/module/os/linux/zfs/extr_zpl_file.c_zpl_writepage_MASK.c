
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int sync_mode; } ;
struct page {TYPE_2__* mapping; } ;
struct TYPE_6__ {TYPE_1__* z_os; } ;
struct TYPE_5__ {int host; } ;
struct TYPE_4__ {scalar_t__ os_sync; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct page*,struct writeback_control*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(struct page *VAR_2, struct writeback_control *VAR_3)
{
 if (FUNC_0(VAR_2->mapping->host)->z_os->os_sync == VAR_1)
  VAR_3->sync_mode = VAR_0;

 return (FUNC_1(VAR_2, VAR_3, VAR_2->mapping));
}
