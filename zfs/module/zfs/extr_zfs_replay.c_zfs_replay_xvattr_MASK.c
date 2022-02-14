
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int va_mask; } ;
struct TYPE_11__ {int xva_mapsize; int * xva_reqattrmap; TYPE_1__ xva_vattr; } ;
typedef TYPE_2__ xvattr_t ;
struct TYPE_12__ {int xoa_hidden; int xoa_system; int xoa_archive; int xoa_readonly; int xoa_immutable; int xoa_nounlink; int xoa_appendonly; int xoa_nodump; int xoa_opaque; int xoa_av_modified; int xoa_av_quarantined; int xoa_reparse; int xoa_offline; int xoa_sparse; int xoa_projinherit; int xoa_projid; int * xoa_av_scanstamp; int xoa_createtime; } ;
typedef TYPE_3__ xoptattr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_13__ {int lr_attr_masksize; int lr_attr_bitmap; } ;
typedef TYPE_4__ lr_attr_t ;
typedef void* caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (void*,int *,int) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(lr_attr_t *VAR_35, xvattr_t *VAR_36)
{
 xoptattr_t *VAR_37 = ((void*)0);
 uint64_t *VAR_38;
 uint64_t *VAR_39;
 uint32_t *VAR_40;
 void *VAR_41;
 int VAR_42;

 VAR_36->xva_vattr.va_mask |= VAR_0;
 if ((VAR_37 = FUNC_4(VAR_36)) == ((void*)0)) {
  VAR_36->xva_vattr.va_mask &= ~VAR_0;
  return;
 }

 FUNC_0(VAR_35->lr_attr_masksize == VAR_36->xva_mapsize);

 VAR_40 = &VAR_35->lr_attr_bitmap;
 for (VAR_42 = 0; VAR_42 != VAR_35->lr_attr_masksize; VAR_42++, VAR_40++)
  VAR_36->xva_reqattrmap[VAR_42] = *VAR_40;

 VAR_38 = (uint64_t *)(VAR_35 + VAR_35->lr_attr_masksize - 1);
 VAR_39 = VAR_38 + 1;
 VAR_41 = (caddr_t)(VAR_39 + 2);

 if (FUNC_1(VAR_36, VAR_23))
  VAR_37->xoa_hidden = ((*VAR_38 & VAR_6) != 0);
 if (FUNC_1(VAR_36, VAR_34))
  VAR_37->xoa_system = ((*VAR_38 & VAR_16) != 0);
 if (FUNC_1(VAR_36, VAR_18))
  VAR_37->xoa_archive = ((*VAR_38 & VAR_3) != 0);
 if (FUNC_1(VAR_36, VAR_31))
  VAR_37->xoa_readonly = ((*VAR_38 & VAR_13) != 0);
 if (FUNC_1(VAR_36, VAR_24))
  VAR_37->xoa_immutable = ((*VAR_38 & VAR_7) != 0);
 if (FUNC_1(VAR_36, VAR_26))
  VAR_37->xoa_nounlink = ((*VAR_38 & VAR_9) != 0);
 if (FUNC_1(VAR_36, VAR_17))
  VAR_37->xoa_appendonly = ((*VAR_38 & VAR_2) != 0);
 if (FUNC_1(VAR_36, VAR_25))
  VAR_37->xoa_nodump = ((*VAR_38 & VAR_8) != 0);
 if (FUNC_1(VAR_36, VAR_28))
  VAR_37->xoa_opaque = ((*VAR_38 & VAR_11) != 0);
 if (FUNC_1(VAR_36, VAR_19))
  VAR_37->xoa_av_modified = ((*VAR_38 & VAR_4) != 0);
 if (FUNC_1(VAR_36, VAR_20))
  VAR_37->xoa_av_quarantined =
      ((*VAR_38 & VAR_5) != 0);
 if (FUNC_1(VAR_36, VAR_22))
  FUNC_2(&VAR_37->xoa_createtime, VAR_39);
 if (FUNC_1(VAR_36, VAR_21)) {
  FUNC_0(!FUNC_1(VAR_36, VAR_29));

  FUNC_3(VAR_41, VAR_37->xoa_av_scanstamp, VAR_1);
 } else if (FUNC_1(VAR_36, VAR_29)) {




  FUNC_3(VAR_41, &VAR_37->xoa_projid, sizeof (uint64_t));
 }
 if (FUNC_1(VAR_36, VAR_32))
  VAR_37->xoa_reparse = ((*VAR_38 & VAR_14) != 0);
 if (FUNC_1(VAR_36, VAR_27))
  VAR_37->xoa_offline = ((*VAR_38 & VAR_10) != 0);
 if (FUNC_1(VAR_36, VAR_33))
  VAR_37->xoa_sparse = ((*VAR_38 & VAR_15) != 0);
 if (FUNC_1(VAR_36, VAR_30))
  VAR_37->xoa_projinherit = ((*VAR_38 & VAR_12) != 0);
}
