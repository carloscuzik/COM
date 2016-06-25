.class public Main
.super java/lang/Object

.method public <init>()V
  aload_0
  invokenonvirtual java/lang/Object/<init>()V
  return
.end method

.method public static main([Ljava/lang/String;)V
  .limit stack 4
  .limit locals 10

  iconst_1
  istore_1
 L1:
  iconst_1
  istore_2
 L2:
  getstatic java/lang/System/out Ljava/io/PrintStream;
  iload_1
  invokevirtual java/io/PrintStream/println(I)V
  getstatic java/lang/System/out Ljava/io/PrintStream;
  iload_2
  invokevirtual java/io/PrintStream/println(I)V
  iconst_1
  iload_2
  iadd
  istore_2
  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "----"
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  iload_2
  iconst_3
  if_icmpne L2
  goto L3
 L3:
  iconst_1
  iload_1
  iadd
  istore_1
  iload_1
  bipush 6
  if_icmpne L1
  goto L4
 L4:
  return
.end method
