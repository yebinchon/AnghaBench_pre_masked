
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receive_writer_arg {int byteswap; scalar_t__ max_object; scalar_t__ or_firstobj; scalar_t__ or_numslots; int or_byteorder; int or_mac; int or_iv; int or_salt; int or_crypt_params_present; int raw; } ;
struct drr_object_range {scalar_t__ drr_numslots; scalar_t__ drr_firstobj; int drr_mac; int drr_iv; int drr_salt; int drr_flags; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct receive_writer_arg *VAR_7,
    struct drr_object_range *VAR_8)
{







 boolean_t VAR_9 = VAR_3 ^ VAR_7->byteswap ^
     !!FUNC_0(VAR_8->drr_flags);
 if (VAR_8->drr_numslots != VAR_1 ||
     FUNC_1(VAR_8->drr_firstobj, VAR_1) != 0 ||
     !VAR_7->raw)
  return (FUNC_2(VAR_2));

 if (VAR_8->drr_firstobj > VAR_7->max_object)
  VAR_7->max_object = VAR_8->drr_firstobj;






 VAR_7->or_crypt_params_present = VAR_0;
 VAR_7->or_firstobj = VAR_8->drr_firstobj;
 VAR_7->or_numslots = VAR_8->drr_numslots;
 FUNC_3(VAR_8->drr_salt, VAR_7->or_salt, VAR_6);
 FUNC_3(VAR_8->drr_iv, VAR_7->or_iv, VAR_4);
 FUNC_3(VAR_8->drr_mac, VAR_7->or_mac, VAR_5);
 VAR_7->or_byteorder = VAR_9;

 return (0);
}
