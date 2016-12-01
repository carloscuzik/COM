.class public Main
.super java/lang/Object

.method public <init>()V
  aload_0
  invokenonvirtual java/lang/Object/<init>()V
  return
.end method

.method public static maior(I,I;)Ljava/lang/String
  .limit stack 4
  .limit locals 10

  iload_1
  iload_0
  if_icmplt L1
  goto L2
 L1:
  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "oi"
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  goto L3
 L2:
  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "oi"
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
 L3:
  return
.end method

.method public static main(Ljava/lang/String;)V
  .limit stack 4
  .limit locals 10

  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "Valor de A:"
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  bipush 10
  istore_1
  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "Valor de B:"
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  bipush 10
  istore_2
 L4:
  iload_1
  iload_2
  if_icmpne L5
  goto L10
 L5:
  iload_1
  iload_2
  if_icmpgt L6
  goto L7
 L6:
  iload_1
  iload_2
  isub
  istore_1
 L7:
  iload_2
  iload_1
  if_icmpgt L8
  goto L9
 L8:
  iload_2
  iload_1
  isub
  istore_2
 L9:
  goto L4
 L10:
  iconst_2
  iconst_2
invokevirtual maior
  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "\nRes="
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  getstatic java/lang/System/out Ljava/io/PrintStream;
  iload_1
  invokevirtual java/io/PrintStream/println(I)V
  return
.end method

