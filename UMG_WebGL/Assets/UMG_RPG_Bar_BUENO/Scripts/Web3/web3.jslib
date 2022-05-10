// web3.jslib

mergeInto(LibraryManager.library, {
  WalletAddress: function () {
    var returnStr;
    try {
      // get address from metamask
      returnStr = web3.currentProvider.selectedAddress;
    } catch (e) {
      returnStr = "";
    }
    var returnStr = web3.currentProvider.selectedAddress;
    var bufferSize = lengthBytesUTF8(returnStr) + 1;
    var buffer = _malloc(bufferSize);
    stringToUTF8(returnStr, buffer, bufferSize);
    return buffer;
  },
  FetchCollection: function () {
    var returnStr;
    try {
      // get collection from opensea
      console.log(window.userHasCollection);
      returnStr = window.userHasCollection;
    } catch (e) {
      returnStr = "";
    }
    var returnStr = window.userHasCollection;
    var bufferSize = lengthBytesUTF8(returnStr) + 1;
    var buffer = _malloc(bufferSize);
    stringToUTF8(returnStr, buffer, bufferSize);
    return buffer;
  },
  RunFetch: function () {
    console.log('run fetch!');
    fetchCollection();
  },
  Test: function () {
    TestLog();
  },
  ConnectToMetamask: function () {
    if (window.ethereum) {
      web3 = new Web3(window.ethereum);
      // connect popup
      ethereum.enable();
      window.ethereum.on("accountsChanged", function () {
        location.reload();
      });
    }
  },
});