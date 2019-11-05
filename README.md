# cross compiling for Windows
---

- reference : https://ooo-imath.sourceforge.io/wiki/index.php/Cross-compiling_for_Windows

## Layout
```
.
├── README.md
│                                            
├── VS2010/
│    └── vc/
│ 		  ├── IDE/	
│ 		  ├── bin/	
│		  ├── include/
│		  └── lib/
├── VS2012/                               
│    └── vc/
│ 		  ├── IDE/	
│ 		  ├── bin/	
│		  ├── include/
│         ├── lib/
│		  └── redist/
├── VS2017/                                                                                 │    └── vc/
│ 		  ├── bin/	
│		  ├── include/
│         └── lib/
├── SDK7/
│	 ├── include/
│    └── lib/
└── SDK10/
	 ├── include/
     └── lib/

```

## How to install
### WINE
1) install `wine`

### VS2010
1) cp -r VS2010/ /home/you/.wine/drive_c
2) wine regedit

```
3) HKEY_LOCAL_MACHINE
	└── System
		└── CurrentControlSet
			└── Control
				└── Session Manager
					└── Environment
```

4) Add the path in PATH
	: `C:\VS2010\vc\bin;C:\VS2010\vc\IDE;`
5) check `wine cl`

### VS2012
1) `cp -r VS2012/ /home/you/.wine/drive_c`
2) `wine regedit`

```
3) HKEY_LOCAL_MACHINE
	└── System
		└── CurrentControlSet
			└── Control
				└── Session Manager
					└── Environment
```

4) Add the path in PATH
	: `C:\VS2012\vc\bin;C:\VS2010\vc\IDE;`
5) check `wine cl`

### VS2017
1) `cp -r VS2017/ /home/you/.wine/drive_c`
2) `wine regedit`

```
3) HKEY_LOCAL_MACHINE
	└── System
		└── CurrentControlSet
			└── Control
				└── Session Manager
					└── Environment
```

4) Add the path in PATH
	: `C:\VS2017\vc\bin;`
5) check `wine cl`

### SDK7
1) `cp -r SDK7/ /home/you/.wine/drive_c`


### SDK10
1) `cp -r SDK10/ /home/you/.wine/drive_c`


## When you compile
### [Example] VS2012 with SDK7; x86 to x64 cross compile

```shell
LD="wine link" LIB="C:/VS2012/vc/lib/amd64;C:/SDK7/x64" \
	wine cl $1 /EHsc -o $2.exe \
	/IC:/VS2012/vc/include /IC:SDK7/include \
	kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib \
	shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib \
	winmm.lib rpcrt4.lib Crypt32.lib imm32.lib Urlmon.lib Oleaut32.lib \
	Winscard.lib Opengl32.lib Mpr.lib Ws2_32.lib Bcrypt.lib Ncrypt.lib \
	Shell32.lib Rpcns4.lib Mswsock.lib \
	Msimg32.lib RpcRT4.lib Rpcrt4.lib lz32.lib \
	Normaliz.lib Cryptnet.lib\

```
