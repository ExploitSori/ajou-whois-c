const request = require('request')
const cheerio = require('cheerio')

const main = async()=>{
let res = await new Promise((resolve, reject) => {
	request.get({url:"https://www.acmicpc.net/user/sori"}, (err, response, html) => err ? reject(err) : resolve(html));
});
$ = cheerio.load(res)
console.log("sori")
console.log($("#statics > tbody > tr:nth-child(2) > td > a").text())
}
main()
