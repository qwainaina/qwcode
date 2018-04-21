from bitcoin import*

PrivateVar1 = random_key()
PrivateVar2 = random_key()
PrivateVar3 = random_key()

print (PrivateVar1)
print (PrivateVar2)
print (PrivateVar3)

PublicVar1 = privtopub(PrivateVar1)
PublicVar2 = privtopub(PrivateVar2)
PublicVar3 = privtopub(PrivateVar3)

print(PublicVar1)
print(PublicVar2)
print(PublicVar3)

WalletAddress1 = pubtoaddr(PublicVar1)
WalletAddress2 = pubtoaddr(PublicVar2)
WalletAddress3 = pubtoaddr(PublicVar3)

print(WalletAddress1)
print(WalletAddress2)
print(WalletAddress3)

PrivateVarArray=[PrivateVar1,PrivateVar2,PrivateVar3]
#print "\n".join(PrivateVarArray)

MultiSigAddressMaker = mk_multisig_script(PrivateVar1, PrivateVar2, PrivateVar3, 2, 3)
MultiSigAddress = scriptaddr(MultiSigAddressMaker)
print(MultiSigAddress)
SigAddress = str(MultiSigAddress)
print(SigAddress)






