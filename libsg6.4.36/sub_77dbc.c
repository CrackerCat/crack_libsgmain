void sub77dbc(int a1, int a2, int a3) {
  int v3; // r0@5
  int v4; // r5@0
  int v5; // r6@0
  int v6; // lr@0
  _JNIEnv *v7; // r4@1
  int v8; // ST38_4@1
  int v9; // r1@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r0@2
  int v14; // ST18_4@2
  int v15; // r1@2
  int v16; // r2@2
  int v17; // r0@2
  int v18; // r1@2
  int v19; // r2@2
  char v20; // [sp+37h] [bp-45h]@1
  int v21; // [sp+6Ch] [bp-10h]@1
  _BYTE savedregs[24]; // [sp+7Ch] [bp+0h]@4

  v7 = (_JNIEnv *)a1;
  v8 = a1;
  dyna_arg(a1, a2, a3);
  dyna_arg(v8, v9, 16 * v5);
  v21 = **(_DWORD **)(16 * v4 - 1275462166);
  goto_decrypt_entry(v8 - 1275462161, &v20, 53);
  // "com/taobao/wireless/security/adapter/common/HttpUtil"
  v10 = ((int (__fastcall *)(_JNIEnv *, char *))v7->functions->FindClass)(v7, &v20);
  if ( v10 )
  {
	// 創建HttpUtil class
    v13 = ((int (__fastcall *)(_JNIEnv *, int))v7->functions->NewGlobalRef)(v7, v10);
    v14 = v13;
    v17 = dyna_arg(v13, v15, v16);
    *(_DWORD *)(v14 - 1275462080) = dyna_arg(v17, v18, v19);
    dyna_pc(2);
    JUMPOUT(3);
  }
  *(_DWORD *)&savedregs[4] = 0;
  *(_DWORD *)&savedregs[8] = v11;
  *(_DWORD *)&savedregs[12] = v6;
  dyna_arg(0, v11, v12);
  v3 = **(_DWORD **)(*(_DWORD *)&savedregs[4] - 1275462336);
  JUMPOUT(__CS__, *(_DWORD *)&savedregs[20]);
}