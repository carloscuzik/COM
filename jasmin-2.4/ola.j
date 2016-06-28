.class public Alo
.super java/lang/Object

.method public <init>()V
  aload_0
  invokenonvirtual java/lang/Object/<init>()V
  return
.end method

.method public static main([Ljava/lang/String;)V
  .limit stack 5
  .limit locals 10

  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "Qual o seu nome?"
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  ldc "carlos "
  istore_1
  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "Ola "
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  getstatic java/lang/System/out Ljava/io/PrintStream;
  iload_1
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  return
.end method
