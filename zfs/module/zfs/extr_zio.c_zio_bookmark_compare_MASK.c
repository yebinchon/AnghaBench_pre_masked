
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zb_objset; scalar_t__ zb_object; scalar_t__ zb_level; scalar_t__ zb_blkid; } ;
struct TYPE_4__ {TYPE_1__ io_bookmark; } ;
typedef TYPE_2__ zio_t ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const zio_t *VAR_2 = VAR_0;
 const zio_t *VAR_3 = VAR_1;

 if (VAR_2->io_bookmark.zb_objset < VAR_3->io_bookmark.zb_objset)
  return (-1);
 if (VAR_2->io_bookmark.zb_objset > VAR_3->io_bookmark.zb_objset)
  return (1);

 if (VAR_2->io_bookmark.zb_object < VAR_3->io_bookmark.zb_object)
  return (-1);
 if (VAR_2->io_bookmark.zb_object > VAR_3->io_bookmark.zb_object)
  return (1);

 if (VAR_2->io_bookmark.zb_level < VAR_3->io_bookmark.zb_level)
  return (-1);
 if (VAR_2->io_bookmark.zb_level > VAR_3->io_bookmark.zb_level)
  return (1);

 if (VAR_2->io_bookmark.zb_blkid < VAR_3->io_bookmark.zb_blkid)
  return (-1);
 if (VAR_2->io_bookmark.zb_blkid > VAR_3->io_bookmark.zb_blkid)
  return (1);

 if (VAR_2 < VAR_3)
  return (-1);
 if (VAR_2 > VAR_3)
  return (1);

 return (0);
}
