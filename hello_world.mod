MODULE hello_world;

FROM StrIO IMPORT WriteString, WriteLn;

BEGIN
	WriteString('Hello, world!');
	WriteLn;
END hello_world.
