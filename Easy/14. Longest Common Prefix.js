/**
 * @param {string[]} strs
 * @return {string}
 */
 var longestCommonPrefix = function(strs) {
    let prefix = strs[0];
    let min = 201;
    let len;
    
    strs.forEach((str) => {
        if(str.length < min){
            min = str.length;
            prefix = str;
        }
    });
    len = prefix.length;
    for(let i = 0; i < len; i++){
        console.log(prefix);
        let common = true;
        strs.forEach((str) => {
            if(prefix != str.slice(0,prefix.length)){
                common = false;    
            }
        });
        if(common){
            return prefix;
        }
        prefix = prefix.slice(0,prefix.length-1);
    }
    
    return "";
};